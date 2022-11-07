#include <stdio.h>

typedef struct Junken_data {
	int com_array[5];
	int num_win;
	int num_lose;
	int num_even;
	char result[6];
}Junken_data;

void one_junken(Junken_data *data);
int input_you();
void win_lose(int you, int com, int i, Junken_data *data);

int main(void) {
	Junken_data data;
	data = { { 5,2,3,1,2 },0,0,0,"00000" };
	printf("私は固定パターンしか出せないジャンケンマシーンです\n");
	printf("このコードは構造体の参照を使用しています\n");

	for (int i = 0; i < 5; i++) {
		one_junken(&data);
	}
	printf("\nresult = %s\n", data.result);
	printf("勝ち: %d回  負け: %d回　あいこ: %d回\n\n", data.num_win, data.num_lose, data.num_even);
	return 0;
}

void one_junken(Junken_data *data) {
	int you, com;
	static int i = 0;

	printf("これは%d回目の勝負です\n", i + 1);
	printf("あなたの手を1から3の数字で入力してください。\n");
	printf("\n");
	printf("1. グー　2. チョキ　3. パー\n\n");

	you = input_you();
	com = data->com_array[i];

	if (com == 1) printf("私の手はグーです\n");
	else if (com == 2) printf("私の手はチョキです\n");
	else if (com == 3) printf("私の手はパーです\n");
	else {
		printf("私の手が入力エラーなので、グーに変えます\n");
		com = 1;
	}
	//printf("私の手はグーです\n");
	win_lose(you, com, i, data);

	i++;
	return;
}

int input_you() {
	int input_end = 0;
	int you;
	while (input_end == 0) {
		scanf_s("%d", &you);
		if (you == 1) {
			printf("あなたはグーを出しました\n");
			input_end = 1;
		}
		else if (you == 2) {
			printf("あなたはチョキを出しました\n");
			input_end = 1;
		}
		else if (you == 3) {
			printf("あなたはパーを出しました\n");
			input_end = 1;
		}
		else {
			printf("入力した手が無効です\n");
		}
	}
	return you;
}

void win_lose(int you, int com, int i, Junken_data *data) {
	int judge = (com - you + 3) % 3;

	printf("judge=%dです\n", judge);

	if (judge == 0) {
		printf("あいこです\n");
		data->result[i] = 'E';
		(data->num_even)++;
	}
	else if (judge == 1) {
		printf("あなたの勝ちです\n");
		data->result[i] = 'W';
		(data->num_win)++;
	}
	else if (judge == 2) {
		printf("あなたの負けです\n");
		data->result[i] = 'L';
		(data->num_lose)++;
	}
	printf("\n");
	return;
}
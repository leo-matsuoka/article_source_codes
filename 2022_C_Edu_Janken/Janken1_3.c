#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int you,com;
	int judge;

	printf("私はグーしか出せないジャンケンマシーンです。\n");
	printf("あなたの手を1から3の数字で入力してください。\n");
	printf("\n");
	printf("1. グー　2. チョキ　3. パー\n\n");

	scanf_s("%d", &you);

	if (you == 1) {
		printf("あなたはグーを出しました\n");
	}
	else if (you == 2) {
		printf("あなたはチョキを出しました\n");
	}
	else if (you == 3) {
		printf("あなたはパーを出しました\n");
	}
	else {
		printf("入力した手が無効です\n");
		exit(0);
	}

	com = 1;
	printf("私の手はグーです\n");

	judge = (com - you + 3) % 3;

	printf("judge=%dです\n", judge);

	if (judge==0) {
		printf("あいこです\n");
	}
	else if (judge == 1) {
		printf("あなたの勝ちです\n");
	}
	else if (judge == 2) {
		printf("あなたの負けです\n");
	}
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int you,com;
	int judge;

	printf("���̓O�[�����o���Ȃ��W�����P���}�V�[���ł��B\n");
	printf("���Ȃ��̎��1����3�̐����œ��͂��Ă��������B\n");
	printf("\n");
	printf("1. �O�[�@2. �`���L�@3. �p�[\n\n");

	scanf_s("%d", &you);

	if (you == 1) {
		printf("���Ȃ��̓O�[���o���܂���\n");
	}
	else if (you == 2) {
		printf("���Ȃ��̓`���L���o���܂���\n");
	}
	else if (you == 3) {
		printf("���Ȃ��̓p�[���o���܂���\n");
	}
	else {
		printf("���͂����肪�����ł�\n");
		exit(0);
	}

	com = 1;
	printf("���̎�̓O�[�ł�\n");

	judge = (com - you + 3) % 3;

	printf("judge=%d�ł�\n", judge);

	if (judge==0) {
		printf("�������ł�\n");
	}
	else if (judge == 1) {
		printf("���Ȃ��̏����ł�\n");
	}
	else if (judge == 2) {
		printf("���Ȃ��̕����ł�\n");
	}
}
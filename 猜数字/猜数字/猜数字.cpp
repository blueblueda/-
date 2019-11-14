#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu() {
	printf("------------------\n");
	printf("------1继续-------\n");
	printf("------2退出-------\n");
	printf("------------------\n");
}

int toguess_number() {
	int randnumber = rand() % 100 + 1;
	int username = 0;
	printf("请输入你猜的数字:\n");
	while (1) {
		scanf("%d", &username);
		if (username > randnumber) {
			printf("你猜大了,请重新猜\n");
			continue;
		}
		else if (username < randnumber) {
			printf("你猜小了,请重新猜\n");
			continue;
		}
		else {
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
int main() {
	int chose = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:toguess_number(); break;
		case 2:break;
		default:printf("输入错误请重新输入\n"); break;
		}
	} while (chose != 2);
}

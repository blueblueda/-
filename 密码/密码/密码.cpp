#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define times 3
int main() {
	char password[10] = { 0 };
	int i = 0;
	printf("请输入密码\n");
	for (i; i < times; ++i) {
		scanf("%s", password);

		if (strcmp(password, "123456") == 0) {
			break;
		}
		else {
			printf("密码错误，重新输入\n");
		}
	}
	if (i == times) {
		printf("退出系统\n");
	}
	else {
		printf("登入成功\n");
	}
	
	return 0;
}

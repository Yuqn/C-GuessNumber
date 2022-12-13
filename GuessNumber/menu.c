#define _CRT_SECURE_NO_WARNINGS

// 引入
#include<stdio.h>

// 功能列表
void menu() {
	printf("=================================\n");
	printf("==========    猜数字   ==========\n");
	printf("=================================\n");
	printf("========     1、开始     ========\n");
	printf("========     0、退出     ========\n");
	printf("=================================\n");
}

// 选择功能
int menu_scanf() {
	printf("请选择功能：-->\n");
	// 定义存储选择功能
	int scanf_num = 0;
	scanf("%d",&scanf_num);
	// 限制输入内容
	switch (scanf_num)
	{
		case 1: {
			printf("开始游戏\n");
			return scanf_num;
		}
		case 0: {
			printf("退出游戏\n");
			return scanf_num;
		}
		default:{
			printf("请输入合法内容\n");
			return 0;
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS

// 引入
#include<stdio.h>
#include<stdlib.h>

// 生成随机数
int get_rand() {
	return rand() % 100 + 1;
}

// 判断随机数是否和输入内容符合
int is_yes() {
	// 键入随机数
	int set_rand = 0;
	// 获取随机数
	int rand_num = get_rand();
	printf("获取的随机数为%d\n", rand_num);
	// 判断是否一致
	while (1)
	{
		// 获取键盘数字
		printf("请输入数字\n");
		scanf("%d", &set_rand);

		if (rand_num == set_rand) {
			printf("猜对了\n");
			system("cls");
			break;
		}
		else if (rand_num > set_rand) {
			printf("猜小了\n");
		}
		else if (rand_num < set_rand) {
			printf("猜大了\n");
		}
	}
	
	
	return 0;
}
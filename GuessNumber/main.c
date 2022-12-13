#define _CRT_SECURE_NO_WARNINGS

// 引入
#include<Windows.h>
#include<time.h>

// 引入自定义头文件
#include "menu.h"
#include "rand.h"

int main() {
	// 记录功能选择
	int nemu_set = 0;
	// 设置随机数前置
	srand(time(NULL));
	// 开始
	do
	{
		// 功能选择
		menu();
		nemu_set = menu_scanf();
		if (nemu_set != 0) {
			// 生成随机数
			is_yes();
		}
	} while (nemu_set);

	return 0;
}
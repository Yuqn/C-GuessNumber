#define _CRT_SECURE_NO_WARNINGS

// ����
#include<stdio.h>

// �����б�
void menu() {
	printf("=================================\n");
	printf("==========    ������   ==========\n");
	printf("=================================\n");
	printf("========     1����ʼ     ========\n");
	printf("========     0���˳�     ========\n");
	printf("=================================\n");
}

// ѡ����
int menu_scanf() {
	printf("��ѡ���ܣ�-->\n");
	// ����洢ѡ����
	int scanf_num = 0;
	scanf("%d",&scanf_num);
	// ������������
	switch (scanf_num)
	{
		case 1: {
			printf("��ʼ��Ϸ\n");
			return scanf_num;
		}
		case 0: {
			printf("�˳���Ϸ\n");
			return scanf_num;
		}
		default:{
			printf("������Ϸ�����\n");
			return 0;
		}
	}
}
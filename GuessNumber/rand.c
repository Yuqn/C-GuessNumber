#define _CRT_SECURE_NO_WARNINGS

// ����
#include<stdio.h>
#include<stdlib.h>

// ���������
int get_rand() {
	return rand() % 100 + 1;
}

// �ж�������Ƿ���������ݷ���
int is_yes() {
	// ���������
	int set_rand = 0;
	// ��ȡ�����
	int rand_num = get_rand();
	printf("��ȡ�������Ϊ%d\n", rand_num);
	// �ж��Ƿ�һ��
	while (1)
	{
		// ��ȡ��������
		printf("����������\n");
		scanf("%d", &set_rand);

		if (rand_num == set_rand) {
			printf("�¶���\n");
			system("cls");
			break;
		}
		else if (rand_num > set_rand) {
			printf("��С��\n");
		}
		else if (rand_num < set_rand) {
			printf("�´���\n");
		}
	}
	
	
	return 0;
}
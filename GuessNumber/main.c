#define _CRT_SECURE_NO_WARNINGS

// ����
#include<Windows.h>
#include<time.h>

// �����Զ���ͷ�ļ�
#include "menu.h"
#include "rand.h"

int main() {
	// ��¼����ѡ��
	int nemu_set = 0;
	// ���������ǰ��
	srand(time(NULL));
	// ��ʼ
	do
	{
		// ����ѡ��
		menu();
		nemu_set = menu_scanf();
		if (nemu_set != 0) {
			// ���������
			is_yes();
		}
	} while (nemu_set);

	return 0;
}
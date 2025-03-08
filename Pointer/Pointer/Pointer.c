#include <stdio.h>

int main_Pointer()
{
	//������ ����
	int n = 3;

	//������ ������ ���� - ������ �޸� ����(�ּ�)�� ����
	int* pn;

	pn = &n; //���� n�� �ּҸ� ������

	printf("������ ��: %d\n", n);
	printf("������ �޸� ����: %x\n", &n);

	printf("������ ��: %x\n", pn);
	printf("������ (����)�� �޸� ����: %x\n", &pn);
	printf("������ (����)�� ����Ű�� ������ ��: %x\n", *pn);

	//�ڷ����� ũ��
	//�Ϲݺ��� - ������(4B), ������(1B), �Ǽ���(8B)
	//������ - ��� 8Byte��
	printf("������ �ڷ��� ũ��: %dByte\n", sizeof(n));
	printf("������ ������ �ڷ��� ũ��: %dByte\n", sizeof(pn));
		
	printf("=====================================\n");
	//������ ����
	char c;
	char* pc;

	c = 'A';
	pc = &c; //���� c�� �ּҸ� ����

	printf("������ ��: %c\n", c);
	printf("������ �ּ�: %x\n", &c);
	printf("�������� ��: %x\n", pc);
	printf("�����Ͱ� ����Ű�� �޸� ��: %c\n", *pc);

	printf("������ �ڷ���ũ��: %dByte\n", sizeof(c));
	printf("������ ������ �ڷ���ũ��: %dByte\n", sizeof(pc));

	return 0;
}
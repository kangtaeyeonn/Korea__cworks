#include <stdio.h>

void sayHello(); //�Լ� �����
void sayHello2(char name[]); //�Ű������� �ڷ����� ǥ��
int main_SayHello()
{
	//�Լ� ȣ��
	sayHello();

	sayHello2("�̼���");
	sayHello2("Elsa");

	return 0;
}

//�Լ� ����(��ü)
void sayHello()
{
	printf("�ȳ��ϼ���\n");
}

void sayHello2(char name[])
{
	printf("%s�� �ȳ��ϼ���\n", name);
}


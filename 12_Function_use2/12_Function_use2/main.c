#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void MyPrint(int nParam)
{
	int nData = 10;
	return;
}
void TestFunc(int nParam)
{
	MyPrint(5);
}
int main(void)
{
	//<< ����Լ� >>

	//��� ȣ�� (recursive function call)�� �Լ��� ���ο��� �ٽ� �ڱ� �ڽ��� ȣ���ϴ� ��
	//recursion
	//�ݺ����� ���� �ڷᱸ���� ��ģ���� �ٷ� ���ȣ���̴�
	//������ �ڵ��� ������ �ݺ����������� �ݺ� �������� ���� �ڷ� ������ ������ �ʿ��� ��� ���ȣ���� ����Ѵ�.

	TestFunc(10);
	return 0;

	//GetFactorial�Լ�

	//24�� 10��
}
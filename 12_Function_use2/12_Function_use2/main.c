#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/*void MyPrint(int nParam)
{
	int nData = 10;
	return;
}
void TestFunc(int nParam)
{
	MyPrint(5);
}*/


//1. ���丮�� �Լ��� ��Ÿ�� ����Լ�
//funcrec01.c

//int i = 0, nFact = 1;
//for (i = 5; i >= 1; --i)
//{
//	nFact *= i;
//}
//printf("5! == %d\n", nFact);



//2. funcrec02.c

//����� ����ϰ� ����� ��ȯ�ϴ� �Լ�
//int GetFactorial(int nParam)
//{
//	int nResult = 0;
//	//���ȣ���� ������ ���� ���ǽ�, �ݺ����� ���ǽİ� ����.
//	if (nParam == 1)
//	{
//		return 1;
//	}
//
//
//	nResult = nParam * GetFactorial(5); // ������ �Լ��� ��ȯ�Ǳ������� �ѹ��� ����� ���� ����. 
//	//GetFactorial�Լ��� ��ȯ�Ǿ�� ������ �Ѵ�.
//
//	//�Ű������� ���� 1 ���ҽ��� �ٽ� �ڱ� �ڽ��� �ٽ� ȣ���Ѵ�.
//	//�̴� �ݺ����� ������ ����.
//}
//
//int main(void)
//{
//	//<< ����Լ� >>
//
//	//��� ȣ�� (recursive function call)�� �Լ��� ���ο��� �ٽ� �ڱ� �ڽ��� ȣ���ϴ� ��
//	//recursion
//	//�ݺ����� ���� �ڷᱸ���� ��ģ���� �ٷ� ���ȣ���̴�
//	//������ �ڵ��� ������ �ݺ����������� �ݺ� �������� ���� �ڷ� ������ ������ �ʿ��� ��� ���ȣ���� ����Ѵ�.
//
//	//TestFunc(10); 
//	printf("5! == %d\n", GetFactorial(5));
//	return 0;
//}

//���⼭ 



//void PutData(char* pszParam)
//{
//	//���ڿ��� ���̸� �� �̻� ���ȣ�� ���� �ʰ� ��ȯ�Ѵ�. 
//	if (*pszParam == '\0')
//	{
//		return;
//	}
//
//	//���� �� ������ ���� ������ �ٲٸ� ���ڿ��� �������� ��µȴ�.
//	putchar(*pszParam);
//
//	//���� ���ڸ� ����Ű�� �ּҸ� �Ű������� ���ȣ���Ѵ�.
//	PutData(pszParam + 1);
//}
//
//
//
//
//int main(void)
//{
//	//PutData("TestData");
//	//putchar('\n');
//	char psData[20] = { "Hello" };
//	char pszData[10] = { "World" };
//
//	strcat(psData, pszData);
//
//	printf("%s", psData);
//	
//	return 0;
//}




//<< �ӵ� >>
//For�ݺ� + stack   >  ���
//						1. Call overHead�߻�
//						2. stack ����
//						3. �Ű����� ����
//						4. stackȸ��
						// Call OverHead�� �����ϱ� ���� ���� ��� = '��ũ��' , 
						//<�ζ��� �Լ�> 
						//�����δ� �Լ����������� Call�� ���� �ʴ´�. 


// <<strcat>>
//funcstrcat02.c
//strcat(char *strDstData, const char* strSource)
//strDstData�� strSource�� �߰���Ų��.
//int main(void)
//{
//	char szPath[128] = { "C:\\Program Files\\" };
//
//	strcat(szPath, "CHS\\");
//	strcat(szPath, "C programming");
//	puts(szPath);
//
//	strcpy(szPath, "C:\\Program Files\\");
//	strcat(szPath+ strlen("C:\\Program Files\\"), "CHS\\");
//	strcat(szPath+ strlen("C:\\Program Files\\CHS"), "C programming");
//	puts(szPath);
//	//�ּҿ� ���ڿ��� ���̸�ŭ �����ش� ��, \0�� ��ġ
//
//	return 0;
//}


//<<strncat>>
// strcat(char *strDstData, const char* strSource, size_t count);
// count��ŭ �߰���Ų��.


// <<char *strpbrk(const char *string), const char *strCharSet);
//string���� strCharSet�� �˻��Ͽ� �ּҸ� ��ȯ

// string - �˻� ��� ���ڿ��� �ּ�
// strCharSet - �˻��� ���� ����
//
//ã���� �ش� ���ڿ��� �ּҹ�ȯ
//��ã���� NULL��ȯ

// ������ ��� ���ڿ����� Ư�� ���������� �˻��ϴ� �Լ� 



//24�� 32:40��



// <<

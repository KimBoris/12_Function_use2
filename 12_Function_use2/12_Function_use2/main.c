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



// <<strtok>>
// char *strtok (char *strToken, const char *Delimit);
//strToken = ��ūȭ �� ���ڿ��� ����� �޸� �ּ�
//Delimit = ��ū�� ������ �Ǵ� ������ ���� ����

//��ȯ�� - �ι�° ���ڷ� ���޵� ���� ���� �� �ϳ��� ã���� �ش繮�ڰ�
//����� �޸��� ������ NULL�� �ٲٰ� ���ڿ��� ���� �ּҸ� ��ȯ�Ѵ�.

//������ ���ڿ��� �����ڸ� �ٰŷ� ��ūȭ �ϴ� �Լ�
//���������� ��������(static)�� ����ϱ� ������ �����ؾ��Ѵ�.

//�����ڸ� �������� ��ūȭ�� ���ڿ��� ȭ�鿡 ����ϴµ� 
//��µ� ���ڿ����� ��� �ǿ����ڿ� �ش��Ѵ�. 
//�ֳ��ϸ�, ������ ���������� �����ڿ� ȭ��Ʈ �����̽��� �����߱� ����.

//funcstrtok01.c

//void main()
//{
//	//��ūȭ �� ��� ���ڿ�
//	char szBuffer[128] = { "nData = x + y;\nnResult = a * b" };
//	//��ūȭ�� ������ �Ǵ� ������ ���ڿ�
//	char* pszSep = "*+=\n";
//	char* pszToken = NULL;
//
//	//������ ���ڿ��� �ٰŷ� ù ��° ��ūȭ�� �õ��Ѵ�.
//
//	pszToken = strtok(szBuffer, pszSep);//strtok()�Լ��� ȣ���� ����
//	// ù��° ���ڷ� ��ūȭ�� ������ ���ڿ��� ����� �޸��� �ּҸ� ����ߴ�
//	while (pszToken != NULL)
//	{
//		//ã�� ��ū�� ����Ѵ�.
//		puts(pszToken);
//		//�� ���� ��ū�� �̾ �˻��Ѵ�.
//		pszToken = strtok(NULL, pszSep);
//		//ù��° ���ڸ� NULL�� ���
//
//		//'��ūȭ' - �� ���ڿ��� ��Ģ�� ���� �߰� �ڸ��°�
//		// '���ڿ� �߰��� NULL�� ����ִ°�'
//		//���ڿ��� ��ū ����ó�� ���� ���� ���� �Լ�
//
//		//ex)
//		//"�ڷγ�19 �Ƿ��� ������ ��������."  >> ���������ؼ� strtok() > "�ڷγ�19" "�Ƿ���" "������" "��������."
//		//��ó�� �ܾ ������ �� �� �ִ�.
//
//
//		//ex2)
//		//"��ȯ��, �ڴ뱸, �̽ñ�, �踶��ũ"
//		//strtok("���ڿ�", "������"(����+��ǥ)); > �� : ��ȯ��  �ڴ뱸  �̽ñ�  �踶��ũ
//		
//
//
//		//������ - �۵������� strstr(), strpbrk()�Լ��� �����ϴ�.
//		//but, strtok()�Լ��� �˻� ��� �޸𸮿� '����'�� �õ�(NULL����) �ϴµ��� ���������� ���������� ����ϱ� ������
//		//��Ƽ ������ ȯ�濡�� ������ �߻��� �� �ִ�. 
//
//
//	}
//
//
//	//����� ���� ���ڿ��� ����غ���
//	printf("\nszBuffer : %s\n", szBuffer);
// }



//int main(void)
//{
// 	wchar_t wcsBuffer[12] = { L"Hello" };
//	
//  	return 0;
//}



//<wcsTombs>
//size_t wcstombs(char* mbstr, const wchar_t *wcstr, size_t count);
//���� : mbstr = MBCS�� ��ȯ�� ���ڿ��� ������ �޸� �ּ�
//	     wcstr = MBCS�� ��ȯ�� �����ڵ� ���ڿ��� ����� �޸� �ּ�
//		 count = ��ȯ�� ���ڿ��� �ִ� ũ��

//��ȯ : MBCS�� ��ȯ�� ���ڿ��� ũ��
//		���� mbstr�μ��� NULL�̸� ��ȯ�� ���� �ʿ��� �޸� ���� ��ȯ
//���� : �����ڵ� ���ڿ��� MBCS���ڿ��� ��ȯ�ϴ� �Լ�


//<<mbstowcs>>
//size_t mbstowcs(wchar_t *wcstr, const char *mbstr, size_t count);
//���� : wcstr - �����ڵ�� ��ȯ�� ���ڿ��� ������ �޸� �ּ�
//       mbstr - �����ڵ�� ��ȯ�� mbcs���ڿ��� ����� �޸� �ּ�
//		count - ��ȯ�� ���ڿ��� �ִ� ũ��

//��ȯ : �����ڵ�� ��ȯ�� ���ڿ��� ����(����)
//	     ����, wcstr�μ��� NULL�̸� ��ȯ�� ���� �ʿ��� �޸� ���� ��ȯ

//���� : MBCS > �����ڵ�  ��ȯ���ִ� �Լ�






//<<<�̷� ��찡 �ִ�>>>
/*
 ��ó���⿡ �̿� ���� ������ �� �Ʒ� main���� �������� 
#ifdef _UNICODE
#define TCHAR  wchar_t

#else
#define TCHAR char
#endif
*/
//int main(void)
//{
//	TCHAR a;
//	printf("%d", a);
//
//}
//�ش� ���� �Ʒ� ������ ���� ���Ѵ�.
/*  ���������� >  ���� �Ӽ� > ��� > �������� >  1. �����ڵ� ���ڷ� ǥ�� = 2
											  2. ��Ƽ����Ʈ ���ڷ� ǥ�� = 1*/







//��ƿ��Ƽ �Լ�
//atoi(const char *string), atol(), atof()�Լ�
//�Է��� ���� ���ڿ��� ������ �ڷ����� �°� ��ȯ���ش�
//Int��, Long��, Double������ ��ȯ
//void main(void)
//{
//	char szBuffer[32];
//	int nResult = 0;
//
//
//	printf("Input string");
//	gets(szBuffer);
//
//
//	nResult = atoi(szBuffer);
//
//
//	printf("%d\n", nResult);
//}




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


//1. 팩토리얼 함수를 나타낸 재귀함수
//funcrec01.c

//int i = 0, nFact = 1;
//for (i = 5; i >= 1; --i)
//{
//	nFact *= i;
//}
//printf("5! == %d\n", nFact);



//2. funcrec02.c

//계승을 계싼하고 결과를 반환하는 함수
//int GetFactorial(int nParam)
//{
//	int nResult = 0;
//	//재귀호출을 끝내기 위한 조건식, 반복문의 조건식과 같다.
//	if (nParam == 1)
//	{
//		return 1;
//	}
//
//
//	nResult = nParam * GetFactorial(5); // 곱셈은 함수가 반환되기전까지 한번도 실행된 적이 없다. 
//	//GetFactorial함수가 반환되어야 연산을 한다.
//
//	//매개변수의 값을 1 감소시켜 다시 자기 자신을 다시 호출한다.
//	//이는 반복문의 계수기와 같다.
//}
//
//int main(void)
//{
//	//<< 재귀함수 >>
//
//	//재귀 호출 (recursive function call)은 함수가 내부에서 다시 자기 자신을 호출하는 것
//	//recursion
//	//반복문과 스택 자료구조를 합친것이 바로 재귀호출이다
//	//논리적인 코드의 구조는 반복문과같으나 반복 과정에서 선형 자료 구조인 스택이 필요한 경우 재귀호출을 사용한다.
//
//	//TestFunc(10); 
//	printf("5! == %d\n", GetFactorial(5));
//	return 0;
//}

//여기서 



//void PutData(char* pszParam)
//{
//	//문자열의 끝이면 더 이상 재귀호출 하지 않고 반환한다. 
//	if (*pszParam == '\0')
//	{
//		return;
//	}
//
//	//다음 두 구문의 실행 순서를 바꾸면 문자열이 뒤집어져 출력된다.
//	putchar(*pszParam);
//
//	//다음 글자를 가리키는 주소를 매개변수로 재귀호출한다.
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




//<< 속도 >>
//For반복 + stack   >  재귀
//						1. Call overHead발생
//						2. stack 증가
//						3. 매개변수 복사
//						4. stack회복
						// Call OverHead을 보안하기 위해 나온 대안 = '매크로' , 
						//<인라인 함수> 
						//겉으로는 함수형태이지만 Call을 하지 않는다. 


// <<strcat>>
//funcstrcat02.c
//strcat(char *strDstData, const char* strSource)
//strDstData에 strSource를 추가시킨다.
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
//	//주소에 문자열의 길이만큼 더해준다 즉, \0의 위치
//
//	return 0;
//}


//<<strncat>>
// strcat(char *strDstData, const char* strSource, size_t count);
// count만큼 추가시킨다.


// <<char *strpbrk(const char *string), const char *strCharSet);
//string에서 strCharSet을 검색하여 주소를 반환

// string - 검색 대상 문자열의 주소
// strCharSet - 검색할 문자 집합
//
//찾으면 해당 문자열의 주소반환
//못찾으면 NULL반환

// 임의의 대상 문자열에서 특정 문자집합을 검색하는 함수 



//24장 32:40분



// <<

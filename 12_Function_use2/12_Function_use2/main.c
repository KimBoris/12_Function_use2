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



// <<strtok>>
// char *strtok (char *strToken, const char *Delimit);
//strToken = 토큰화 할 문자열이 저장된 메모리 주소
//Delimit = 토큰의 기준이 되는 구분자 문자 집합

//반환값 - 두번째 인자로 전달된 문자 집합 중 하나라도 찾으면 해당문자가
//저장된 메모리의 내용을 NULL로 바꾸고 문자열의 시작 주소를 반환한다.

//임의의 문자열을 구분자를 근거로 토큰화 하는 함수
//내부적으로 정적변수(static)를 사용하기 때문에 주의해야한다.

//구분자를 기준으로 토큰화한 문자열을 화면에 출력하는데 
//출력된 문자열들은 모두 피연산자에 해당한다. 
//왜냐하면, 구분자 문자집합을 연산자와 화이트 스페이스로 구성했기 때문.

//funcstrtok01.c

//void main()
//{
//	//토큰화 할 대상 문자열
//	char szBuffer[128] = { "nData = x + y;\nnResult = a * b" };
//	//토큰화의 기준이 되는 구분자 문자열
//	char* pszSep = "*+=\n";
//	char* pszToken = NULL;
//
//	//구분자 문자열을 근거로 첫 번째 토큰화를 시도한다.
//
//	pszToken = strtok(szBuffer, pszSep);//strtok()함수를 호출할 때는
//	// 첫번째 인자로 토큰화를 시작할 문자열이 저장된 메모리의 주소를 명시했다
//	while (pszToken != NULL)
//	{
//		//찾은 토큰을 출력한다.
//		puts(pszToken);
//		//그 다음 토큰을 이어서 검색한다.
//		pszToken = strtok(NULL, pszSep);
//		//첫번째 인자를 NULL로 명시
//
//		//'토큰화' - 긴 문자열을 규칙에 따라 잘게 자르는것
//		// '문자열 중간에 NULL을 집어넣는것'
//		//문자열을 토큰 조각처럼 조각 조각 내는 함수
//
//		//ex)
//		//"코로나19 의료진 여러분 힘내세요."  >> 띄어쓰기제외해서 strtok() > "코로나19" "의료진" "여러분" "힘내세요."
//		//위처럼 단어만 가지고 올 수 있다.
//
//
//		//ex2)
//		//"김환자, 박대구, 이시국, 김마스크"
//		//strtok("문자열", "구분자"(띄어쓰기+쉼표)); > 값 : 김환자  박대구  이시국  김마스크
//		
//
//
//		//문제점 - 작동원리는 strstr(), strpbrk()함수와 유사하다.
//		//but, strtok()함수는 검색 대상 메모리에 '쓰기'를 시도(NULL삽입) 하는데다 내부적으로 정적변수를 사용하기 떄문에
//		//멀티 스레드 환경에서 문제가 발생할 수 있다. 
//
//
//	}
//
//
//	//변경된 원본 문자열을 출력해본다
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
//인자 : mbstr = MBCS로 변환한 문자열을 저장할 메모리 주소
//	     wcstr = MBCS로 변환할 유니코드 문자열이 저장된 메모리 주소
//		 count = 변환할 문자열의 최대 크기

//반환 : MBCS로 변환된 문자열의 크기
//		만일 mbstr인수가 NULL이면 변환을 위해 필요한 메모리 길이 반환
//설명 : 유니코드 문자열을 MBCS문자열로 변환하는 함수


//<<mbstowcs>>
//size_t mbstowcs(wchar_t *wcstr, const char *mbstr, size_t count);
//인자 : wcstr - 유니코드로 변환할 문자열을 저장할 메모리 주소
//       mbstr - 유니코드로 변환할 mbcs문자열이 저장된 메모리 주소
//		count - 변환할 문자열의 최대 크기

//반환 : 유니코드로 반환된 문자열의 길이(개수)
//	     만일, wcstr인수가 NULL이면 변환을 위해 필요한 메모리 길이 반환

//설명 : MBCS > 유니코드  변환해주는 함수






//<<<이런 경우가 있다>>>
/*
 전처리기에 이와 같이 구현한 후 아래 main식을 보았을때 
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
//해당 값은 아래 설정에 따라 변한다.
/*  구성관리자 >  구성 속성 > 고급 > 문자집합 >  1. 유니코드 문자로 표현 = 2
											  2. 멀티바이트 문자로 표현 = 1*/







//유틸리티 함수
//atoi(const char *string), atol(), atof()함수
//입력한 숫자 문자열을 각각의 자료형에 맞게 반환해준다
//Int형, Long형, Double형으로 변환
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




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
	//<< 재귀함수 >>

	//재귀 호출 (recursive function call)은 함수가 내부에서 다시 자기 자신을 호출하는 것
	//recursion
	//반복문과 스택 자료구조를 합친것이 바로 재귀호출이다
	//논리적인 코드의 구조는 반복문과같으나 반복 과정에서 선형 자료 구조인 스택이 필요한 경우 재귀호출을 사용한다.

	TestFunc(10);
	return 0;

	//GetFactorial함수

	//24장 10분
}
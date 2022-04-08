// 04_07_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#define IF_STATEMENT

#if (IF_STATMENT)
// 매크로 함수의 위험성
#define SWAP(a, b)  a^=b; b^=a; a^=b;
#endif

void event() {};
int main()
{
#if (!IF_STATMENT)
	int i = 0;		// i : 라인수
	int j = 0;		// j : *의 개수

	for (i = 0; i < 5; i++)		// i : 0 ~ 4 ==> 5회
	{
		// " "(공백) 출력을 위한 반복문
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		// *이 출력되는 반복문
		// 1번째 for문
		for (j = 0; j < i + 1; j++)	// j : 0 ~ 4 ==> 5회
		// 2번째 for문
		//for (j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		// *을 모두 출력한 위치
		printf("\n");	// 다음 라인 이동
	}
	
#endif
#if (IF_STATMENT)
	int a = 0;
	int b = 1;
	int Sum = 0;

	// for 문장 안에서 변수 선언 하지 마세요~
	for (int i = 0; i < 11; i++)
	{
		Sum += i;
	}
	// 벗어나는 순간 i는 존재하지 않는 변수
	//cout << "Sum : " << Sum << "  i : " << i << endl;

	// {, }로 묶지 않으면 알 수 없는 오류가 발생 : 찾기 어려움
	if (0)
		SWAP(a, b);

	// do ~ while을 통한 이벤트 확인 : 이벤트는 5가지 조건 만족 시
	do
	{
		// 1번 조건 확인
		if (!1)
			break;
		// 2번 조건 확인
		if (!1)
			break;
		// ...
		// 5번 조건 확인
		if (!1)
			break;

		// 이벤트 실행 함수
		event();
		return 0;

	} while (true);
	// 이벤트를 실행하지 않고 실패한 경우의 처리

	cout << a << " " << b << endl;

    std::cout << "Hello World!\n";
	cout << "cout\n" << endl;
#endif
	return 0;
}

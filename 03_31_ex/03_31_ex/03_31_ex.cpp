// 03_31_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;
// 새로운 자료형을 선언 : typedef A B => A를 B로 사용하겠다.
typedef int INT;		// int 자료형을 INT로 사용하겠다.
typedef int i;
typedef int* inp;
// 새로운 자료형을 선언해야 하는 이유: 매우 긴 자료형을 간단히 표현하기 위해
// 기본 자료형은 사용되는 위치가 정해져 있음
// 선언된 변수 역시 사용되는 위치가 정해져 있음

typedef struct asdf_for_asdf_in_memory
{
	int x;
	char c;
} ASDF, *PASDF;

// 전역 변수
int ga;			// 전역변수 
int gb = 1;		// 초기화한 전역변수

void asdf()
{
	int a;
	int b = 2;
	printf("%s : %p - %p\n", __FUNCTION__, &a, &b);
	printf("%s : %p - %p\n", __FUNCTION__, &ga, &gb);
}

int main()
{
	// ex 3-1
	int a = 0;
	//a++ = 1;		// 오류! 1=1 인 상태가 만들어짐
	++a = 1;

	// ex 2-17
	// 변수의 상수화 : const 예약어 => l-value가 아닌 형식으로 변환 :: 상수 변환
	const int c1 = 1;		// const 자료형 변수;
	int const c2 = 2;		// 자료형 const 변수;

	//c1 = 2;
	//c2 = 3;

	// ex 2-16
	int a;
	int b = 2;
	printf("%s : %p - %p\n", __FUNCTION__, &a, &b);
	printf("%s : %p - %p\n", __FUNCTION__, &ga, &gb);
	asdf();
	return 0;
	// 매우 긴 자료형의 예
	struct asdf_for_asdf_in_memory bb;
	//struct asdf bb;
	ASDF aa;
	PASDF cc = &aa;
	
	// 변수 선언 형식 : 자료형 변수; => 자료형과 변수들은 별도로 관리된다.
	i i;			// 첫번째 i는 자료형으로 해석, 두번째 i는 변수로 해석
	INT x;
	inp ptr = &i;
	x = 10;
	i = x * 10;		// = (치환 연산자) => l-value(변수)

	std::cout << "Hello World! " << i << std::endl;
	//std::cout << "Hello World! " << int << std::endl;
    std::cout << "Hello World! " << x << std::endl;
}

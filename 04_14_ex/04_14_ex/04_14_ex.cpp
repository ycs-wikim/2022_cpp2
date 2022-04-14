// 04_14_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

// 포인터와 배열 정리
int main()
{
	int a[4] = { 1243, 2132, 233, 64 };
	//	|0|0|0|1||0|0|0|2||0|0|0|3||0|0|0|4|
	//시작주소
	//int *p = &a;		// a가 포인터이므로 허용 안됨
	int *p = a;
	printf("A: %d %d %d %d\n", a[0], a[1], a[2], a[3]);
	printf("P: %d %d %d %d\n", p[0], p[1], p[2], p[3]);
	//printf("P: %d %d %d %d\n", *p);
	printf("P: %d %d %d %d\n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));
	// 배열의 인덱스는 왜 0부터 시작인가?
	//printf("P: %d %d %d %d\n", a, a + 1, a + 2, a + 3);
	// *p == a 
}


// 포인터 정리!
// 포인터는 주소만!!!!! 값으로 받을 수 있다!
// 포인터의 연산자
// * : 가리키고 있는 주소 값
//	선언에서 사용될때는 다수개 사용이 가능
//	* + 포인터 변수 : 형식만 허용
//	* + 일반 변수 : 허용하지 않음! 컴파일러에서 번역 불가
// & : 뒤의 변수의 주소 값
//	주소 연산자는 하나 밖에 사용이 불가!
//	& + 모든 종류의 변수 : 해당 변수의 주소

// 대상 타입과 실제 타입 : 항상 동일한 자료형을 사용해야 한다!
// int* = &int;
// char* = &char;
// 다르면 발생하는 문제: 

/*
int main()
{
	// 포인터 실습
	// 일반 변수 선언
	int a = 3;		// *a 사용 불가, &a : a의 주소를 반환
	int *p = &a;	// *p == a, &p : p의 주소를 반환
	int kbs;
	int mbc;
	//char *sbs = &mbc;	// 다른 자료형의 주소 입력 불가!
	// 포인터는 주소만을 가지고 있을 뿐 어떻게 접근할지는
	// 자료형이 결정하기 때문!
	char *sbs = (char*)&mbc;
	// 1. 포인터는 주소만! 가지고 있다!
	// 2. 접근 방법은 자료형만을 이용한다!

	//int *ptr = 3;	// 상수는 포인터의 값으로 주어질 수 없다!
	//int **ptr = &a;	// 일반 변수는 2중 포인터에 할당 불가
	int **ptr = &p;	// *ptr == p, **ptr == a
	//printf("%p\n", &&ptr);
	int ***ptr1 = &ptr;
	int ****ptr2 = &ptr1;
	int *****ptr3 = &ptr2;

	//printf("a: %d %d %p\n", a, *a, &a);
	printf("a: %d %p\n", a, &a);
	printf("p: %p %d %p\n", p, *p, &p);
	printf("ptr : %p %p %d %p\n", ptr, *ptr, **ptr, &ptr );
	printf("ptr1 : %p %p %p %d %p\n", ptr1, *ptr1, **ptr1, ***ptr1, &ptr1);
	printf("ptr2 : %p %p %p %p %d %p\n", ptr2, *ptr2, **ptr2, ***ptr2, ****ptr2, &ptr2);
	
	return 0;
}
*/
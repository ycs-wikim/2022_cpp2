// 04_21_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void strcut_test()
{
	/*
	struct kkk
	{
		char m;
	} s1;

	struct kkk
	{
		char m;
	} s2;
	*/
	struct 
	{
		char m;
	} s1, s2;

	s1 = s2;
}


// 배열 첨자와 포인터와의 관계
void test_array()
{
	// 배열 이름은 선언 즉시 상수로 선언 : 주소 변경 불가
	int a[5] = { 23, 5, 67, 324, 234 };
	int *p = a;		// 포인터의 주소 변경 1
	printf("P1: %d\n", *p);
	// 포인터와 배열의 가장 큰 차이점
	int k = 9;
	p = &k;			// 포인터의 주소 변경 2
	printf("P2: %d\n", *p);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
}


void ref_test()
{
	int v = 9;
	int arr4[8] = {v,};
	int arr7[8];
	for (int i = 0; i < 8; i++)
		printf("arr7[%d] : %d\n", i, arr7[i]);
	printf("\n");
	// 배열 초기화의 문제점
	int k[2] = { 0, 1 };
	//int b[2] = k;			// 자료형의 문제! : 값으로 사용하려 했다!
	int(*p)[2] = &k;		// 배열형 포인터 : 주소를 받아서 사용한다!
	printf("K sizeof( %d )\n", sizeof(k));
	printf("P sizeof( %d )\n", sizeof(p));
	int bc[1200] = { 0, 1, 2 };

	// 포인터에 포인터 할당
	int t = 0;
	int *tt = &t;
	int *t1 = tt;
	int *t2 = tt;
	int *t3 = t1;
	//int *t4 = *t1;

	int a;
	int &ra = a;	// 자료형 &변수명; == 포인터처럼 동작
					// 실제 사용은 일반 변수와 동일

	ra = 3;
	printf("%d[ %d ]\n", a, ra);

	// ex 5-18
	const int& rb = 1;
	//int *p = (int*)&rb;
	//*p = 2;
	printf("REF: %d\n", rb);
}


int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	// p[N] == *( p + N )
	//test_array();
	//ref_test();
	strcut_test();
	// 포인터는 선언 시 반드시 초기화해야 한다!
	int *p;		// 초기화하지 않은 포인터
	int *p1 = NULL;		// NULL로 초기화
	int *p2 = nullptr;	// 최신 트랜드

	std::cout << "Hello World!\n" << p1 << endl;
	return 0;
}

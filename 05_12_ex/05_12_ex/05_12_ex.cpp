// 05_12_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수 호출 종류 확인을 위한 구조체 선언
typedef struct testforaslfjkdalkfjalkfhkaugiougtuueh89
{
	int x;
	int y;
	int z;
} BBQ, *PBBQ;

// 함수의 원형(프로토타입) : 컴파일러에게 미리 함수가 있음을 알리는 기능
//	함수의 몸체를 제외한 나머지를 미리 선언하는 방법
void call_by_address(PBBQ bbq);
//void call_by_address(PBBQ);


// 1. call by value
void callByValue(BBQ bbq)		// BBQ bbq = bbq : 값의 복사
{
	/*
	int x = 6;	// x(6)
	int z = x;	// x(6), z(6)
	z = 15;		// x(6), z(15)
	*/
	bbq.x += 100;
	bbq.y += 100;
	bbq.z += 100;

	call_by_address(&bbq);


	printf("%s %d %d %d\n", __FUNCTION__, bbq.x, bbq.y, bbq.z);
}

// 2. call by address
void call_by_address(PBBQ bbq)		// PBBQ bbq = &bbq
{
	bbq->x += 100;
	bbq->y += 100;
	bbq->z += 100;
	printf("%s %d %d %d\n", __FUNCTION__, bbq->x, bbq->y, bbq->z);
}

// 3. call by reference
void callByRef(BBQ &bbq)		// BBQ &bbq = bbq
{
	bbq.x *= 10;
	bbq.y *= 10;
	bbq.z *= 10;
	printf("%s %d %d %d\n", __FUNCTION__, bbq.x, bbq.y, bbq.z);
}


int main()
{
	BBQ bbq;
	PBBQ p1 = &bbq;
	void *ptr = &bbq;

	bbq.x = 10;
	bbq.y = 3000;
	bbq.z = 18000;

	int *p = (int*)ptr;
	printf("PTR: %d %d %d\n", p[0], p[1], *(p + 2));



	printf("Before %d %d %d\n", bbq.x, bbq.y, bbq.z);
	callByValue(bbq);
	printf("After-1\t\t%d %d %d\n", bbq.x, bbq.y, bbq.z);
	call_by_address(&bbq);
	printf("After-2\t\t%d %d %d\n", bbq.x, bbq.y, bbq.z);
	callByRef(bbq);
	printf("After-3\t\t%d %d %d\n", bbq.x, bbq.y, bbq.z);
}


#ifdef ASDF
/*
함수	: f(x)
	1. 어떤 기능을 수행하도록 만들겠다.
	2. 기능 수행을 위해 필요한 정보(인수) + 개수
	3. 결과 값을 어떻게 받을 것인지
	4. 이름을 이쁘게 짓기
*/

/*
// ADD 매크로 함수
	1. 2개의 수를 주면 두 수의 합한 결과를 알려주는 기능
	2. 숫자 2개
	3. 숫자로 결과 값을 얻고 싶다.
	4. add
*/
int add(int a, int b)		// int a = 5, int b = 7
{
	int res = 0;
	res = a + b;
	return res;
	1 + a + 8 * b + 9;
	return a + b;
}

int main()
{
	printf("%d\n", add(5, 7));

	return 0;
}
#endif


#ifdef STRUCT_EXAM

//struct TestForSingleInstanceViewData
// typedef A B; ==> A는 앞으로 B로 사용하겠다.
typedef 
// A의 시작
struct TestForSingleInstanceViewData
{
	int x;
	int y;
	char m;
}
// A의 종료, B의 시작
TESTSDV, *PTESTSDV
;


int main()
{
	struct
	{
		char m;
	} b;

	struct
	{
		char m;
	} c;

	//b = c;	// Error! : unnamed라도 다르게 인식

	//struct TestForSingleInstanceViewData a;
	TESTSDV a, z;
	TESTSDV *p1 = &a;
	PTESTSDV p = &a;		// 구조체 포인터
	
	printf("S[ %d ]\n", sizeof(a));

	a.x = 10;
	a.y = 20;
	a.m = 'A';
	z = a;

	p->m = 'C';		// 포인터 변수를 이용한 멤버 접근

    std::cout << "Hello World!\n";

	return 0;
}

#endif
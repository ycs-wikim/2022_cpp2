// 05_26_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 생성자와 소멸자
/*
1. 생성자
	- 인스턴스가 생성되는 시점에 자동으로 호출되는 함수
	- 반드시 권한이 public 이어야 한다!
	- 생성자는 다수개 생성이 가능하다!
	- 반환값이 존재하지 않는다!
	- 클래스의 이름과 동일한 함수이름을 사용한다!
2. 소멸자
	- 인스턴스가 파괴되는 시점에 자동으로 호출되는 함수
	- 반드시 권한이 public 이어야 한다!
	- 소멸자는 클래스에 단 한개만 존재할 수 있다!
	- 반환값이 존재하지 않는다!
	- 클래스의 이름과 동일한 함수이름을 사용하되, 앞에 ~를 붙인다.
*/

class CTest
{
public:
	int member;
	// 인수가 없는 생성자
	CTest() {		printf("%s called 1\n", __FUNCTION__);	}
	// 인수가 1개인 생성자
	CTest(int x) { printf("%s called 2\n", __FUNCTION__); }
	// 인수가 2개인 생성자
	CTest(int x, int y) { printf("%s called 3\n", __FUNCTION__); }
	// 인수 자료형이 다른 1개 생성자
	CTest(double k) { printf("%s called 4\n", __FUNCTION__); }

	// 복사 생성자 : 함수 원형이 고정!
	CTest(const CTest &obj){ printf("%s called copy\n", __FUNCTION__); }

	// 소멸자
	~CTest() { printf("%s called\n", __FUNCTION__); }
	// ~CTest() { printf("%s called\n", __FUNCTION__); }
};

void test(const int *x)
{
	int *p = (int*)x;
	*p = 9999;
}

int main()
{
	int x = 3;
	int k(x);		// C++에서는 모든 자료형을 객체처럼 처리한다.
	test(&k);
		
	printf("%d %d\n", x, k);
	// 클래스의 인스턴스 생성
	CTest a;
	// 복사 생성자의 호출
	CTest copy(a);
	
	// C/C++은 { }가 스택을 생성한다.
	{
		CTest k;
	}

	// 인수가 1개인 생성자
	CTest b(88);
	// 인수가 2개인 생성자
	CTest c(1, 2);	
	// 인수 자료형이 다른 1개 생성자
	CTest d(0.8);
}

// 클래스 후반부 예제
/*
// 구조체 선언 및 메모리 할당 크기 : 8
struct sasdf
{
	int x;
	char m;
};

// 상속할 부모 클래스
class parentA
{
public:
	int p_k;
protected:
	int p_a;
private:
	int p_pp;
public:
	parentA()
	{
		p_k = 3;
		p_a = 6;
		p_pp = 99;
	}
};

class parentB
{
public:
	int p_1;
	int p_2;
public:
	parentB()
	{
		p_1 = 103;
		p_2 = 106;
	}
};

// 자식 클래스 : 부모 클래스의 다중 상속
// ==> 먼저 상속되는 클래스부터 메모리를 생성한다.
class casdf : private parentB, private parentA
{
public:
	casdf()
	{
		this->p_a = 16;
		//x = 9;
		m = 12;
	}
	const int x = 9;
	int x;
	int m;
	void m_asdf(){}	// 멤버 함수(메서드)
	
};

int main()
{
	casdf kkk;
	int *p = (int*)&kkk;	// 클래스를 포인터로 가리키고
	*(p + 2) = 1000;		// private 멤버 역시 조작도 가능
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d\n", p[4], p[5], p[6]);

	// 크기 확인
	printf("struct[ %d ] class[ %d ]\n", sizeof(sasdf), sizeof(casdf));
    std::cout << "Hello World!\n";
}
*/
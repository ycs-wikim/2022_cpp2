// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// C++ : 클래스 == 구조체
struct asdf
{
public:
	int m_x;
	char m_c;
	int method() { int k = 9; printf("%d\n", k); return k; }
};

class asdf1
{
public:
	int m_x;
	char m_c;
	int method() { int k = 9; printf("%d\n", k); return k; }
};


// 클래스의 선언
// 예약어 클래스이름{ 멤버 목록... };
class CName
{
	int m_member;		// 권한이 없는 멤버는 private 권한
	int mmm = 1;
	static const int mkk = 9;	// 정적 + 상수 멤버는 초기화 가능
public:
	//static int kkk = 9;		// 정적 멤버는 클래스 내부에서 초기화 불가능!
	static int kkk;				// 정적 멤버 변수 선언
	int m_value;				// 멤버 변수
	void testForClassName();	// 멤버 함수(메서드) 원형
	void constFunctionTest() const;
};

void CName::constFunctionTest() const
{
	int x;
	x = 9;
	//m_value = 3;	// const 멤버 함수 안에서는 모든
					// 멤버 변수가 자동으로 상수가 된다.
	printf("X1: %d\n", x);
	x++;
	printf("X2: %d\n", x);
	x *= 10;
	printf("X3: %d\n", x);
	printf("m_value: %d\n", m_value);
}


// 정적 멤버 변수의 초기화
int CName::kkk = 9;

// 메서드의 클래스 외부 구현
// 함수반환값 클래스이름::구현할메서드이름(인수)
void CName::testForClassName()	// 멤버 함수(메서드)
{
	printf("THIS[ %p ]\n", this);
	//this->
	printf("%s called\n", __FUNCTION__);
}

// 클래스/객체의 연산자
// 클래스 접근 연산자 ==> ::
// 객체 멤버의 접근 연산자 ==> . , ->

int main()
{
	CName cn;		// C++에서 일반 인스턴스 생성 방법
	CName *p1 = NULL;
	p1->testForClassName();
	cn.testForClassName();
	cn.constFunctionTest();

	asdf1 a1;
	a1.method();
	asdf a2;
	a2.method();
	// 구조체와 클래스의 메모리 할당 크기
	printf("Class[ %d ] struct[ %d ]\n",
		sizeof(asdf1), sizeof(asdf));


    std::cout << "Hello World!\n";
}

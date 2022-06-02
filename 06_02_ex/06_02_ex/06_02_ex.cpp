// 06_02_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class CChild
{
public:
	int m_child;
	int m_child2;
};


class CTest
{
	CChild m_child;	// 클래스 포함 관계
public:
	int m_value;
	// 초기화 리스트 : 생성자 호출 전에 동작 기능
	// 생성자 ( ) 뒤에 작성
	// 형식 : 멤버변수(초기화할 값)
	// ==> 상수 멤버가 여러 값을 가지도록 만들 수 있다!
	const int m_kkk;
	// 디폴트 생성자에 초기화 리스트 사용 예
	// 멤버 변수인 m_kkk를 3으로 초기화
	//CTest(int x) : m_kkk(3)
	// m_kkk는 상수, m_value는 일반 멤버
	CTest(int x) : m_kkk(x), m_value(88)
	{
		//m_kkk = 3;
	}

	// 연산자 재정의
	CTest& operator -(const CTest &obj)	{	}
	CTest& operator *(const CTest &obj) {	}
	CTest& operator /(const CTest &obj) {	}
	CTest& operator %(const CTest &obj) {	}
	CTest& operator |(const CTest &obj) {	}
	CTest& operator &(const CTest &obj) {	}
	CTest& operator >(const CTest &obj) {	}
	CTest& operator <(const CTest &obj) {	}
	CChild* operator ->()
	{
		return &m_child;
	}

	// ? : ( 조건식 ) ? TRUE : FALSE;
	//CTest& operator ? (const  ) : 허용하지 않는다. 별도의 기능을 이용해야 한다.
	//CTest& operator ?(const CTest &obj) {	}

	// 객체 간의 + 연산을 수행할 수 있는 메서드
	CTest& operator +(const CTest &obj)
	{
		// 전달된 자신과 동일한 객체 정보를 이용하여
		// 내부에서 별도의 연산을 수행할 수 있다!
		m_value -= obj.m_value;
		return *this;
	}
};

int main()
{
	CTest a(8), b(9), c(10);
	printf("%d %d %d\n", a.m_kkk, b.m_kkk, c.m_kkk);
	printf("%d %d %d\n", a->m_child, b->m_child, c->m_child);
	//a.m_kkk = 15;
	//a = a + b;
	printf("%d %d\n", a.m_value, b.m_value);
	int x = a.m_value + b.m_value;
	const int k = 9;

	// 상수 연산이라도 결과는 임시 변수에 저장되고,
	// 저장된 임시 변수가 나중에 사용되는 형태로 동작
	printf("%d\n", sizeof(int));	// 자료형
	printf("%d\n", sizeof(x));		// 변수
	printf("%d\n", sizeof(3));		// 상수
	printf("%d\n", sizeof(3+4));	// 정수 상수 연산
	printf("%d\n", sizeof(1 + 2.0));	// 소수 상수 연산
	printf("%d\n", sizeof(3.8 + 3.14));
	printf("%d\n", sizeof(a.m_kkk));

    std::cout << "Hello World!\n";
}

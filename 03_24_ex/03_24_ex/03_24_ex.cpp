// 03_24_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdint.h>		// 표준 숫자 자료형 크기

using namespace std;


// 매크로 상수/함수는 컴파일러가 번역하는 시점에 해당 코드를 B로 모두 변경
// 상수 정의 매크로 : #define A B
// ==> 앞으로 A는 B로 사용하겠다. 그래서 실제 사용은 A를 사용한다.
#define PI		3.141592
// 조건부 컴파일 지시문 확인을 위한 선언
//#define CHAPTER_1

// #define 매크로 상수를 선언 : 컴파일 시간에 빌드 옵션으로 매크로 값을 선언할 수 있음

// 매크로 함수 선언
#define ADD(X, Y) X + Y
#define ABS(X, Y) { X + Y; printf("Called\n"); }

int main()
{
	__int64 x;	// 8바이트 짜리 int 자료형
	__int32 y;
	int		z;

// CHAPTER_1이 선언되어 있다면? : #ifdef의 경우 선언되어 있는지를 확인만!
#ifdef CHAPTER_1
// 참인 경우(CHAPTER_1이 선언되어 있는 경우)의 실행
// #ifndef는 #ifdef의 정확히 반대로 동작
	// 현재 V.S 2017 C++ 컴파일러에서는 소수점 이하 5자리까지만 출력됨.
	double d = PI;
	cout << PI << endl;
	cout << 3.141592 << endl;
	cout << d << endl;
	// printf( )는 이러한 제한에서 자유로운 편
	printf("%.7f\n", d);

	// 매크로 함수 호출 결과
	cout << "ADD function: " << ADD(3, 5) << endl;
	//cout << "ADD function: " << ABS(3, 5) << endl;
	ABS(3, 5);
	// 에러가 발생하는 이유.
	// 매크로를 사용할 경우 발생하는 문제점 : 어느 부분이 잘 못되었는지 알기 어려움
	//		==> 어떤 영향을 미치는지와 코드의 복사 되었을 때의 문제점까지 다 확인
	//cout << "ADD function: " << 3 + 5; printf("Called\n"); << endl;
	cout << "ADD function: " << 3 + 5; printf("Called\n"); cout << endl;
	// endl의 특징 : 반드시 cout과 쌍으로 사용이 되어야 함! cout 문장에서만 사용 가능
	//cout(1) << endl(n); // 사용 불가
	cout << endl << "asdf" << endl << "배고파" << endl;

	// 미리 정의된 매크로 : 디버깅/로그 생성 용도
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;
#else
// 거짓인 경우
	// 문자열 사용시에는 반드시 NULL이 포함되어야 한다! ==> 꼭 확인해야 함
	char str[8];	// 문자열 선언 : 마지막에는 반드시! NULL로 끝나야함!
	char str1[10] = { 0, };		// 문자열 선언 시점에 모두 NULL로 초기화
	//char str2[];	// 허용되지 않음!
	char str3[] = "C++";

	wchar_t wstr[] = L"K+++";		// |K|\0|+|\0|+|\0|+|\0|
	char str_1[] = "대한민국";		// char 자료형 UNICODE
	int length = sizeof(str_1);		// sizeof( ) : 할당된 메모리의 크기를 반환
	//cout << str_1 << length << endl;

	wchar_t str_2[] = L"대한민국";	// wide char 자료형
	int wlength = sizeof(str_2);	// 자료형의 크기
	std::wcout << str_2 << endl;
	std::cout << wlength << endl;
/*

	printf("%s\n", wstr);
	wcout << wstr << endl;
	// memory set : ( address, value, length ) : length(길이)만큰 value로 채워준다.
	memset(str, 'A', 8);	//	AAAAAAAA
	memset(str, 0x00, 8);

	//str = "C++++";	// 허용되지 않음!!
	// memory copy : (dest, src, length) dest에 src의 문자열에서 length만큼 복사
	memcpy(str, "C++++", 6);

	str[0] = 'C';			//	CAAAAAAA
	str[1] = '+';			//	C+AAAAAA
	str[2] = '+';			//	C++AAAAA ==> C++AAAA0
	//str[7] = '\0';			//	C++AAAA0
	printf("%s\n", str);	// %s(문자열)로 출력 : NULL을 만날때까지 무조건 출력한다.
    std::cout << "Hello World! " << str << endl;
*/
#endif

	return 0;
}

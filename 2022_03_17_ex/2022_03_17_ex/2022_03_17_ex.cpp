// 2022_03_17_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>		// 해당 파일을 이 위치에 그대로 붙여 넣는다.

using namespace std;	// std 라는 이름 공간을 사용하겠다.
						// std에 소속된 모든 종류의 기능을 코드에서 사용 가능.

/*
 * main 함수의 특징 : 모든 프로그램의 시작 함수 이름
 *  * main 함수가 반환(return) 되면 프로그램은 종료
 *  * main 이라는 이름은 고정되어 있다.
*/
int main(int argc, char **argv)
/*
	* 초기화 인수
	* argc : 프로그램 시작 시 전달되는 인자의 개수
	* argv : 인자의 실제 정보 문자열을 갖는 문자열 배열
*/
{
	//printf("%d - %s - %s - %s\n", argc, argv[0], argv[1], argv[2]);
	// cout : console output == printf( ) : 화면 출력
	// cout은 std 라는 이름 공간에 정의가 되어 있다.
	// :: ==> 이름 공간 한정
	// <<  : 시프트 연산자로 사용될 때, 해당 방향으로 밀어라~
    cout << "Hello World!" << endl;		// endl : end of Line == \n == ENTER
	cout << "asdf가 나는 좋아\n";

	//char name[256];		// X  ==>  256자 내용이 모두 쓰레기 값
	char name[256] = { 0, };		// 256자를 모두 0으로 초기화하면서 변수선언

	cin >> name;	// 콘솔에서 name 문자열 변수로 값을 전달
	cout << "이름: " << name << endl;

	// 반환(return)이 main 함수에서 발생하면 == 프로그램 종료
	return 0;
}

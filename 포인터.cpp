# include <iostream>

using namespace std;

int main() {
	// 변수 선언 과정

	int val = 3;

	cout << &val << endl;

	// C++ : 객체지향 프로그래밍
	
	// 컴파일 시간이 아닌 실행되고 있는 시간에 어떠한 결정을 내릴 수 있다.
	// - 배열 생성
	// 재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정
	// 객체지향 프로그래밍 : 배열의 크기를 실행 시간 결정
	 

	// 포인터 : 사용할 주소에 이름을 붙인다.
	// 즉, 포인터는 포인터의 이름이 주소를 나타냅니다.
	// 간접값 연산자, 간접 참조 연산자 *

	int *a; // c style
	int* b; // c++ style
	int* c, d; // c는 포인터 변수, d는 int 형 변수

	int n = 6;
	int* m;
	m = &n;

	cout << "n의 값" << n << endl;
	cout << "*m의 값" << *m << endl;
	
	cout << "n의 주소" << &n << endl;
	cout << "*m의 주소" << m << endl;

	*m = *m + 1;

	cout << "이제 n의 값은" << n << endl;

	return 0;
}

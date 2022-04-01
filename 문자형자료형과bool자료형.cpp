#include <iostream>

using namespace std;

int main() {
	// char : 작은 문자형 => 작은따옴표 '' , 큰 문자형 => 큰 따옴표 ""
	//int a = 77;
	//char b = 'a';
	// null 문자 '\0'
	// "" >> 명시적으로 null 문자가 포함 => string

	//cout << b << endl;

	// bool : 0 or 1
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << " " << b << " " << c << " " << endl;

	return 0;
}




// c언어 경우 #define PIE 3.141592653

int main() {
	// 원의 넓이를 구하는 프로그램
	const float PIE = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	// 1. 바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// => 상수

	int r2 = 3;
	float s2 = r2 * r2 * PIE;
	cout << s << " " << s2 << endl;

	return 0;
}


int main() {
	// 데이터형 변환
	//1. 특정 데이터의 변수에 다른 데이터형의 값을 대입했을 때
	//2. 수식에 데이터형을 혼합하여 사용했을 때
	//3. 함수에 매개변수를 전달할 때
	
	int a = 3.141592;
	cout << a << endl;
	
	//강제적으로 데이터형 변환
	// typeName(a) , (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	cout << static_cast<int>(ch) << endl;
	// C++
	//static_cast<typeName> => 형변환을 할 때 오류를 체크해줌
	
	return 0;
 }

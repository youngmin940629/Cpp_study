#include <iostream>
#include <string>

using namespace std;

/*
int main() {

	/* 
	배열(array) : 같은 데이터형의 집합
	typeName arrayName[arraySize];
	
	// short month[12]; // 선언
	short month[12] = { 1,2,3 };
	cout << month[8] << endl;

	/*
	배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언
	초기화를 선언 이후 나중에 할 수는 없다.
	배열을 다른 배열에 통째로 대입x
	초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공가능
	배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정
	배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소의 개수를 저장
	

	// 문자열 : 문자의 열
	char a[] = "Hello";
	cout << a << endl;

	return 0;
}
*/

/*
int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다 ! 성함이 어떻게 되시나요? \n";
	//cin >> name1; // 공백 못받음
	cin.getline(name1, Size); // 공백도 받음 getline 또는 get 둘다 가능
	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이" << name1[0] << "자로 시작하는군요. \n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.";
	cout << name2 << endl;

	// C++ 에서 문자열을 다루는 방법 중 하나인 string
	// C 스타일로 string 객체를 초기화 할 수 있다.
	// cin 을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	// cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	// 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
	// 배열을 다른 배열에 통째로 대입할 수 없다. 하지만 string에서는 가능!

	char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";
    //char1 = char2; //틀리다
    str1 = str2; // 맞다
    cout << str1 << endl;

	return 0;
}
*/
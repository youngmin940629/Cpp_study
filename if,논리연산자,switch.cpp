
#include <iostream>
using namespace std;

const int SIZE = 30;
int main() {
	
	// 분기 구문 : if 구문
	if (true) {
		cout << "조건이 참입니다.";
	}
	else {
		cout << "조건이 거짓입니다.";
		cout << "프로그램이 종료되었습니다.";
	}

	// 논리 표현식
	// 논리합, 논리곱, 논리부정 연산자

	// 논리합 ||

	// 좌항 || 우항 => or
	// 5 == 5 || 5 == 9
	// 5 > 3 || 5 > 10
	// 5 > 8 || 5 < 10
	// 5 > 9 || 5 < 2
	
	// 논리곱 && => and
	// 5 == 5 && 9 == 9
	// 5 == 5 && 9 != 9
	// 0 < 2 && 10 > 2

	// 논리 부정 ! => not 
	// !(표현식)
	
	cout << "당신의 나이를 입력하십시오.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "거짓말 하시면 안됩니다.";
	}
	else if (20 <= age && age <= 29) {
		cout << "당신은 20대 이군요? \n";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다./\n";
	}

	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "입력하신 값은 1입니다.\n";
		break;
	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;
	}

	int i = 0;
	while (true)
	{
		cout << "i의 값은 " << i << " 입니다." << endl;
		if (i > 10)
			break;
		i++;
	}
	cout << "while문이 끝났습니다.\n";

	cout << "switch 구문이 끝났습니다.\n";


	cout << "문장을 입력하십시오.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "입력하신 문장은\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;

		spaces++;
	}
	cout << "입니다.\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다.\n";
	cout << "while문이 끝났습니다.\n";


	return 0;
}

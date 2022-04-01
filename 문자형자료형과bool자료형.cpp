#include <iostream>

using namespace std;

int main() {
	// char : ���� ������ => ��������ǥ '' , ū ������ => ū ����ǥ ""
	//int a = 77;
	//char b = 'a';
	// null ���� '\0'
	// "" >> ���������� null ���ڰ� ���� => string

	//cout << b << endl;

	// bool : 0 or 1
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << " " << b << " " << c << " " << endl;

	return 0;
}




// c��� ��� #define PIE 3.141592653

int main() {
	// ���� ���̸� ���ϴ� ���α׷�
	const float PIE = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	// 1. �ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// => ���

	int r2 = 3;
	float s2 = r2 * r2 * PIE;
	cout << s << " " << s2 << endl;

	return 0;
}


int main() {
	// �������� ��ȯ
	//1. Ư�� �������� ������ �ٸ� ���������� ���� �������� ��
	//2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	//3. �Լ��� �Ű������� ������ ��
	
	int a = 3.141592;
	cout << a << endl;
	
	//���������� �������� ��ȯ
	// typeName(a) , (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	cout << static_cast<int>(ch) << endl;
	// C++
	//static_cast<typeName> => ����ȯ�� �� �� ������ üũ����
	
	return 0;
 }
 
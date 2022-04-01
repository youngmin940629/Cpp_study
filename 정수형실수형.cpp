#include <iostream>
#include <climits>
using namespace std; 

int main() {

	// ������

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << "�̴�." << endl;

	cout << "short�� " << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short << "�̴�." << endl;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << "�̴�." << endl;

	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << "�̴�." << endl;

	unsigned int a;
	unsigned short b;
	unsigned long c;
	unsigned long long d;

	b = -1;
	cout << b << endl;	

	// �Ǽ��� 

	float e = 3.14;
	int f = 3.14;
	cout << e << " " << f << endl;

	return 0;
}

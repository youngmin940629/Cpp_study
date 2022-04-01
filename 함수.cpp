#include <iostream>

using namespace std;

// 1. ���ϰ��� �ִ� Ÿ��

typeName functionName(parameterList)
{
	statement(s);
	return value;
}
value type�� ������ type ���ƾߴ�


// 2. ���ϰ��� ���� Ÿ��

void functionName(parameterList)
{
	statement(s);
	return; // �����ɼ�����
}


const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main()
{
	// 1. �Լ� ���� ����
	// 2. �Լ� ���� ����
	// 3. �Լ� ȣ��
	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�. " << endl;


	return 0;
}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

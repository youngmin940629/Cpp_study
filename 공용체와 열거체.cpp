
# include <iostream>

using namespace std;

int main() {
	//����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;

	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.
	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
	// 1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	// 2. red, orange ... 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.

	spectrum a = orange;
	cout << a << endl;


	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭 : ���� ���������� ����

	// �౸����
	// string name;
	// string position;
	// float height;
	// float weight;

	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	
	//A.name = "Son";
	//A.position = "Striker";
	//A.height = 183;
	//A.weight = 77;


	B = {

	};
	// ����θ� 0 ���� ��
	cout << B.name << endl;

	MyStruct A[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << A[0].height << endl;

	return 0;
}

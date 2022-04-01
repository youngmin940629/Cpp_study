
#include <iostream>
using namespace std;

const int SIZE = 30;
int main() {
	
	// �б� ���� : if ����
	if (true) {
		cout << "������ ���Դϴ�.";
	}
	else {
		cout << "������ �����Դϴ�.";
		cout << "���α׷��� ����Ǿ����ϴ�.";
	}

	// ���� ǥ����
	// ������, ������, �������� ������

	// ������ ||

	// ���� || ���� => or
	// 5 == 5 || 5 == 9
	// 5 > 3 || 5 > 10
	// 5 > 8 || 5 < 10
	// 5 > 9 || 5 < 2
	
	// ������ && => and
	// 5 == 5 && 9 == 9
	// 5 == 5 && 9 != 9
	// 0 < 2 && 10 > 2

	// ���� ���� ! => not 
	// !(ǥ����)
	
	cout << "����� ���̸� �Է��Ͻʽÿ�.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�.";
	}
	else if (20 <= age && age <= 29) {
		cout << "����� 20�� �̱���? \n";
	}
	else {
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�./\n";
	}

	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;
	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;
	}

	int i = 0;
	while (true)
	{
		cout << "i�� ���� " << i << " �Դϴ�." << endl;
		if (i > 10)
			break;
		i++;
	}
	cout << "while���� �������ϴ�.\n";

	cout << "switch ������ �������ϴ�.\n";


	cout << "������ �Է��Ͻʽÿ�.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;

		spaces++;
	}
	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�.\n";
	cout << "while���� �������ϴ�.\n";


	return 0;
}

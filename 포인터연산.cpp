
#include <iostream>
#define SIZE 20

using namespace std;

struct Mystruct
{
	char name[20];
	int age;
};

int main() {

	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�.\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];


	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;

	delete[] ps;


	// ���� ����ü ����
	// temp* ps = new temp;
	Mystruct* temp = new Mystruct;
	
	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! " << temp->name << "��\n";
	cout << "����� " << temp->age << "�� �̱���!";



	return 0;
}

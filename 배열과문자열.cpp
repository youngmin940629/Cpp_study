#include <iostream>
#include <string>

using namespace std;

/*
int main() {

	/* 
	�迭(array) : ���� ���������� ����
	typeName arrayName[arraySize];
	
	// short month[12]; // ����
	short month[12] = { 1,2,3 };
	cout << month[8] << endl;

	/*
	�迭 ���ҿ� ������ ������ �޸��� �����Ͽ� �߰�ȣ�� ���� ����
	�ʱ�ȭ�� ���� ���� ���߿� �� ���� ����.
	�迭�� �ٸ� �迭�� ��°�� ����x
	�ʱ�ȭ ���� ������ �迭 ������ �������� ���ڶ�� ��������
	�迭�� �κ������� �ʱ�ȭ�ϸ�, ������ ���ҵ��� ��� 0���� ����
	�迭�� �ʱ�ȭ�� �� ���ȣ ���� ����θ� �����Ϸ��� �ʱ�ȭ ���� ������ ��Ʒ� �迭 ������ ������ ����
	

	// ���ڿ� : ������ ��
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

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ� ! ������ ��� �ǽó���? \n";
	//cin >> name1; // ���� ������
	cin.getline(name1, Size); // ���鵵 ���� getline �Ǵ� get �Ѵ� ����
	cout << "��, " << name1 << "��, ����� �̸��� ";
	cout << strlen(name1) << " ���Դϴٸ�\n";
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸���" << name1[0] << "�ڷ� �����ϴ±���. \n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�.";
	cout << name2 << endl;

	// C++ ���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	// C ��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ �� �� �ִ�.
	// cin �� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	// cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
	// �迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	// �迭�� �ٸ� �迭�� ��°�� ������ �� ����. ������ string������ ����!

	char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";
    //char1 = char2; //Ʋ����
    str1 = str2; // �´�
    cout << str1 << endl;

	return 0;
}
*/
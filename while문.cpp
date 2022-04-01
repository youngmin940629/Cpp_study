
#include <iostream>

using namespace std;

int main()
{
	// while ��, do while ��
	string str = "Panda";
	int i = 0;
	while (str[i] != '\0')  {
		// code
		cout << str[i] << endl;
		i++;
	}
	
	bool a = true;
	bool b = false;
	while (a) {
		cout << "hello\n";
		break;
	}

	int j = 0;
	do {
		cout << "while�� �Դϴ�.\n";
		j++;
	} while (j < 3);

	return 0;
}

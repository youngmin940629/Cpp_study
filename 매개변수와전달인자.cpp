#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {
	int times, times2;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> times;
	cout << "������ �ѹ� �� �Է��Ͻʽÿ�.\n";
	cin >> times2;
	helloCPP(times, times2);
	return 0;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "Hello, C++\n";
	}

	for (int i = 0; i < m; i++) {
		cout << "C++!\n";
	}
}

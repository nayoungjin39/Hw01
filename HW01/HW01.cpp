#include <iostream>
using namespace std;
int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int a = 0;
		for (int i = 0; i < 5; i++) {
			a += arr[i];
		}
	double b = a / 5.0;

	cout << "합계:" << a << endl;
	cout << "통합:" << b << endl;

	return 0;
}
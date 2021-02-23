#include <iostream>
using namespace std;
int main() {
	cout << "Introduce la cantidad de multiplos" << endl;
	int a;
	cin >> a;
	cout << "Introduce el multiplo" << endl;
	int b;
	cin >> b;
	cout << "\n";
	for (int i=1;i<=a;i++) {
		cout << b;
		cout << "x";
		cout << i;
		cout << " = ";
		cout << b*i << endl;
		}
	return 0;
	}
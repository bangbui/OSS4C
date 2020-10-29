#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Tong " << a << " va " << " la " << a + b << endl;
	cout << "Hieu " << a << " va " << " la " << a - b << endl;
	cout << "Tich " << a << " va " << " la " << a * b << endl;
	cout << "Thuong " << a << " va " << " la " << a / b << endl;
	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include "dientich.h"
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

	int hinh;
	cout << "Ban muon tinh dien tich hinh nao (1:HCN; 2:Vuong; 3: Tron)? ";
	cin >> hinh;
	switch (hinh)
	{
	case 1:
		float dai, rong;
		cout << "Nhap chieu dai: ";
		cin >> dai;
		cout << "Nhap chieu rong: ";
		cin >> rong;
		cout << "Dien tich HCN = " << dienTichHCN(dai,rong) << endl;
		break;
	case 2:
		float canh;
		cout << "Nhap canh: ";
		cin >> canh;
		cout << "Dien tich vuong = " << dienTichVuong(canh) << endl;
		break;
	case 3:
		float banKinh;
		cout << "Nhap ban kinh: ";
		cin >> banKinh;
		cout << "Dien tich vuong = " << dienTichTron(banKinh) << endl;
		break;
	default:
		break;
	}
	float dai, rong;
	system("pause");
	return 0;
}
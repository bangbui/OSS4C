#include <iostream>
using namespace std;
#include "chuvi.h";

int main()
{
	int chucNang;
	cout << "Chon chuc nang (1: co ban(+,-,*,/); 2: chu vi; 3: dien tich) ";
	cin >> chucNang;
	switch (chucNang)
	{
	case 1:
		int a, b;
		cout << "Nhap a: ";
		cin >> a;
		cout << "Nhap b: ";
		cin >> b;

		cout << "Tong " << a << " va " << " la " << a + b << endl;
		cout << "Hieu " << a << " va " << " la " << a - b << endl;
		cout << "Tich " << a << " va " << " la " << a * b << endl;
		cout << "Thuong " << a << " va " << " la " << a / b << endl;
		break;
	case 2:
		int hinh;
		cout << "Ban muon tinh chu vi hinh nao(1: HCN;2: Vuong; 3:Tron)?";
		cin >> hinh;
		switch (hinh)
		{
		case 1:
			float dai, rong;
			cout << "Nhap chieu dai: ";
			cin >> dai;
			cout << "Nhap chieu rong: ";
			cin >> rong;
			cout << "Chu vi HCN = " << chuViHCN(dai, rong);
		case 2:
			float canh;
			cout << "Nhap canh: ";
			cin >> canh;
			cout << "Chu vi hinh vuong = " << chuViVuong(canh);
			break;
		case 3:
			float banKinh;
			cout << "Nhap ban kinh: ";
			cin >> banKinh;
			cout << "Chu vi hinh tron = " << chuViTron(banKinh);
			break;
		default:
			cout << "Chon sai hinh";
			break;
		}
	
	default:
		break;
	}
	

	system("pause");
	return 0;
}
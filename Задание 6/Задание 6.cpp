#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, o;
	cout << "Введите 1 произвольное число:" << endl;
	cin >> x;
	cout << "Введите 2 произвольное число:" << endl;
	cin >> y;
	do {
		o = x % y;
		x = y;
		y = o;
	} while (y < 0 || y > 0);
	cout << "Наибольший общий делитель = " << x << endl;
	system("pause");
}
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int b = 0;
	cout << "Введите число ";
	cin >> a;
	while (a)
	{
		a /= 10;
		b++;
	}
	cout << b << " чисел(ла) в числе.";
	return 0;
}
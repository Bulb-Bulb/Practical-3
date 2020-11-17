#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    setlocale(NULL, "rus");
    cout << "Введите кол-во чисел" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int j;
        cout << "Введите " << i + 1 << " число" << endl;
        cin >> j;
        sum += j;
    }
    cout << "Сумма = " << sum << endl;
    system("pause");
}
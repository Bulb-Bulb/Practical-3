#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    setlocale(LC_ALL, "rus");
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    cout << "Сумма = " << sum << endl;
    system("pause");
}
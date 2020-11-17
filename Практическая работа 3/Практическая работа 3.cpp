#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    std::string b = "*";
    while (a >= 0) {
        std::cout << b << std::endl;
        b += "*";
        a--;
    }
    system("pause");
}
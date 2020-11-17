#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 1;
	int c;
	for (int i = 0; i <= 1000; i++)
	{
		i = a + b;
		a = b;
		b = i;
		cout << i << endl;
	}
}
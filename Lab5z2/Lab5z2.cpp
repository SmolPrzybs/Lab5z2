#include<iostream>
using namespace std;

int NWD(int a, int b)
{
	if (b != 0)
		return NWD(b, a % b);

	return a;
}

int main()
{
	int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;

	cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;

	return 0;
}
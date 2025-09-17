#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, x, f;
	cout << "Введите последовательно: a,b,c,x" << endl;
	cin >> a >> b >> c >> x;
	if (x < 3 && b != 0)
		cout << (a * x * x - b * x + c);
	else
		if ((x > 3) && (b == 0))
			cout << ((x - a) / (x - c));
		else
			if (x == 3)
				cout << (x / c);
}
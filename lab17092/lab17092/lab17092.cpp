#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, ct = 0;
	cout << "Введите последовательность в конце которой 0" << endl;
	cin >> a;
	while (a!=0){
		if (((a % 10) > (a % 100)/10)&&(a>=10)) {
			ct++;
		}
		cin >> a;
	}
	if (ct == 0) {
		cout << "Чисел нету" << endl;
	}
	else cout << "Числа есть" << ", количество чисел:" << ct << endl;
	return 0;
}
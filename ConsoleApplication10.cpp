#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;
int obr(int a[]) {
	if (a[0] < a[1] < a[2]) {
		return 1;
	}
}

float sr(int a[]) {
	int x = 0;
	x = (a[0] + a[1] + a[2]) / 3;
	return x;
}

int chet(int a[], int q) {
	int x = 3;
	for (int i = 0; i < x; i++) {
		if (a[i] % 2 == 0){
			a[i] = a[i] + q;
		}
	}
	return a[];

}

int main()
{
	int rez = 0, x1, x2;
	int m1[3] = { 1,2,3 }, d1 = 3;
	int m2[3] = { 3,5,8 }, d2 = 3;
	rez = obr(m1) + obr(m2);
	if (rez == 2) {
		cout << "Pobeda!" << endl;
		x1 = sr(m1);
		x2 = sr(m2);
	}
}

#include <iostream>
using namespace std;
struct AZS
{
	char CharNaim[4];
	int Marca;
	int Praic;
};
int* serchAZS(AZS mas[], int size)
{
	int mn = 5000, mnn[3];
	int mn92 = mn, mn95 = mn, mn98 = mn;
	for (int i = 0; i < size; i++) {
		switch (mas[i].Marca)
		{
		case 92: if (mn92 < mas[i].Praic) mn92 = mas[i].Praic;
			break;
		case 95: if (mn95 < mas[i].Praic) mn95 = mas[i].Praic;
			break;
		case 98: if (mn98 < mas[i].Praic) mn98 = mas[i].Praic;
			break;
		}
	}
	mnn[0] = mn92;
	mnn[1] = mn95;
	mnn[2] = mn98;
	return mnn;
}


void main()
{
	AZS mas[9] = { {"AZ1",92,1000},{"AZ2",92,980} , {"AZ3",92,1250},\
	{ "AZ1",95,1500 }, { "AZ2",95,1800 }, { "AZ3",95,1750 },\
	{ "AZ1", 98, 690 }, { "AZ2",98,700 }, { "AZ3",98,640 } };
	cout << *(serchAZS(mas, 9));


}
#include <iostream>
#include <conio.h>
#include <cmath>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take any values
	float a = 5.5;
	double f1 = nan("1");
	bool hasil;

	hasil = islessequal(a, f1);
	cout << a << " islessequal " << f1 << ": " << hasil;

	_getch();
	return 0;
}

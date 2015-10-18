#include "iostream" 
#include "conio.h"

using namespace std;



int main()
{
	cout << "  Avtor - Kuzmin A.V., student gr. CPIbvs-11" << endl;
	cout << " Variant N 18" << endl;
	cout << " Programma vvodit znachenie argumenta X i vivhislaet znachenir func Y" << endl << endl;
	cout << "   |1+3x       x>4.5" << endl;
	cout << "Y= |e(-2x)      1<=x<=4.5" << endl;
	cout << "   |cos(2x)    x<1" << endl << endl;
	cout << "vvedite x= ";
	double x = 0;
	cin >> x;
	double y;
	if (x > 4.5) y = 1 + 3 * x;
	else if (x < 1) y = cos(x);
	else y = exp(-2 * x);
	cout << "Y=" << y;
	_getch();
	return 0;
}
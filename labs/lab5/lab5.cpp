#include "iostream" 
#include "conio.h"
#include "math.h"
#define PI 3.1415926535897932384626433832795

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "       Автор - Кузьмин А.В., студент гр. ЦПИбвс-11 "<< endl;
	cout << "       Вариант № 18" << endl;
	cout << "  Программа табулирования функции y=1/2-Pi/4*|sin(x)|, а также суммирования ряда" << endl << endl;
	cout << "       cos(2*x)    cos(4*x)    cos(6*x) " << endl;
	cout << "       -------- + ---------- +-------- ..." << endl;
	cout << "         3            15         35      " << endl << endl;
	cout << "на отрезке [0.1;0,8] с шагом 0.05" << endl << endl;
	cout << "|   x\t|   y\t|   s\t|" << endl;
	double x = 0.1;
	double h = 0.05;
	int n = 50;
	while (x <= 0.8+h)
	{
		double y = 1 / 2 - PI / 4 * abs(sin(x));
		double s = 0;
		for (int i = 2; i <=2*n; i += 2)
		{
			double slag = cos(x * i) / ((i - 1) * (i + 1));
			s += slag;
		}
		cout.precision(4);
		cout << "| " << x << "\t| " << y << "\t| " << s << "\t|" << endl;
		x += h;
	}
	_getch();

	return 0;
}

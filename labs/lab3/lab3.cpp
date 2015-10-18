#include "iostream"
#include "conio.h"
#include "cmath"; 
#define PI 3.1415926535

using namespace std;

int main()
{
	cout << " Avtor - Kuzmin A.V., student gr. CPIbvs-11" << endl;
	cout << " Variant N 18" << endl << endl;
	cout << " Programma vvodit simvol figury i celoe chislo dlja vychislenija ploshhadi. I vyvodit ploshhad figury." << endl << endl;
	cout << "Vvedite simvol figury na latinice:" << endl;
	cout << "O - okruzhnost" << endl;
	cout << "T - ravnobedrennyj prjamougolnyj treugolnik" << endl;
	cout << "K - kvadrat" << endl;
	char S;
	cin >> S;
	int x = 0;
	cout << "Vvedite chislo dlya  dlja vychislenija ploshhadi ";
	cin >> x;
	switch (S)
	{
	case 'O': case 'o':		
		cout << "Ploshhad okruzhnosti S=" << x*x* PI;
		break;
	case 'T': case 't':
		cout << "Ploshhad treugolnika S=" << x*x / 2;
		break;
	case 'K': case 'k':
		cout << "Ploshhad kvadrata S=" << x*x;
		break;
	default:
		cout << "Vveden nevernyj simvol";
	}
	_getch();
	return 0;
}
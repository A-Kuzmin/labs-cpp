#include "iostream"
#include "conio.h"

#define M_PI 3.1415926535897932384626433832795
#define h M_PI / 5


using namespace std;

struct student 
{
	int id;
	string firstname;
	string lastname;
	string patronymic;
	int group_id;
	bool married;
	short int child;
	bool use_dormitory;
};

struct subject 
{
	int id;
	string title;
	int teacher_id;
};

struct subject_register
{
	int id;
	unsigned short int year;
	unsigned short int month;
	int subject_id;
	int group_id;
};

struct teacher
{
	int id;
	string firstname;
	string lastname;
	string patronymic;
};
struct group 
{
	int id;
	string title;
	string specialty;
};

int main()
{
	setlocale(0, "");
	cout << "Автор - Кузьмин А.В., студент гр. ЦПИбвс -11" << endl;
	cout << " Вариант №18" << endl << endl;
	cout << " Программа для заполнения таблицы значениями функции" << endl;
	cout << "   |1+3*x      x>2.5" << endl;
	cout << "Y= |e^(-2*x)   1<=x<=4.5" << endl;
	cout << "   |cos(2*x)   x<1" << endl;
	cout << "На отрезке [-Pi/2;2*Pi] с шагом Pi/5" << endl << endl;
	double x = -M_PI / 2;
	double y = 0;
	cout.precision(3);
	cout << " X \t | \t y=f(x)" << endl;
	cout << "\t |" << endl;
	while (x <= 2 * M_PI)
	{
		(x > 4.5) ? y = 1 + 3 * x : (x < 1) ? y = cos(2 * x) : exp(-2 * x);
		cout << x << " \t | \t" << y << endl;
		x += h;
	}
	_getch();
	return 0;
}
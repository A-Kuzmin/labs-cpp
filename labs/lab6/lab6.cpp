
#include "iostream" 
#include "conio.h"

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "       ����� - ������� �.�., ������� ��. ������-11" << endl;
	cout << "       ������� �18" << endl;
	cout << " 18.	� ���������� ������� A=(a1, �2, ..., �n) ������, ���������� ���������� ����� ������ ���������, �������� �� ������������ ������� ����� �������. �������� ������� ������� � ����������."  << endl << endl;
	int n = 15;
	int a[15];
	cout << " ������� ������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl << "�������� ������: \t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "; ";
	}
	int max = a[1];
	
	int num = a[1];
	int numk = 0;
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		if (a[i]>max)  max=a[i];
		for (int j = 0; j < n; j++)
		{
			if (a[j] == a[i])  k++;
		}
		if (k > numk){
			numk = k;
			num = a[i];
		}
	}	
	if (numk > 1)
	{
		cout << endl << "������������ �����: \t";
		for (int i = 0; i < n; i++)
		{
			if (a[i] == num)  a[i] = max;
			cout << a[i] << "; ";
		}
	}
	else
		cout << "��� �������� ����������� �� ������ 1 ����";
	_getch();
	return 0;
}

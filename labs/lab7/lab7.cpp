#include "iostream"
#include "conio.h"
#define n 5

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "	����� - ������� �.�., ������� ��. ������-11" << endl;
	cout << "	������� �18" << endl;
	cout << "	���� ������� A(n x n). ������������ ���������� ������ �� ������������� ��������� ���� �������, ������������� ���� ������� ���������." << endl << endl;
	int matrix[n][n];
	int mass[(n*n - n) / 2];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 200 - 100;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "������ �� ������������� ��������� ���� �������, ������������� ���� ������� ���������:" << endl;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (matrix[i][j]>0)
			{
		mass[k] = matrix[i][j];
		k++;
			}
	for (int i = 0; i < k; i++)
		cout << mass[i] << "; ";
	_getch();
	return 0;
}
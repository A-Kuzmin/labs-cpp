//#include "stdafx.h"
#include "iostream"
#include "conio.h"

using namespace std;

int pre_main(char sysch, int a);
int pre_main(int sysch, int a);
int pre2_10(int a);
int pre2_8(int a);
void pre_main(char sysch, int a, int *res);
void pre_main(char sysch, int a, int &res);

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "����� � ������� �. �., ������� ��. ������-11" << endl;
	cout << "������� � 18" << endl;
	cout << "��������� � �������������� �������, �������������� �������������� ����� � ��������� �������������. ������� ����� ��� ���������: �����, �������������� � ���������� ��� ����������������� ����, �  ����������� ������� ���������, � ������� ����������� ������ �������� (������ d ��� h, ���� ����� 10 ��� 8)."
		<< endl << endl;
	cout << "������� ����� ";
	int x = 0;
	cin >> x;
	cout << endl << "������� ������� ��������� (������ d ��� h, ���� ����� 10 ��� 8) ";
	char y = 0;
	cin >> y;
	int z = pre_main(y,x);  
	cout << z << endl;
	int res = 0;
	pre_main(y, x, &res);
	cout << res << endl;
	pre_main(y, x, res);
	cout << res << endl;
	_getch();
	return 0;
}
int pre_main(char sysch, int a ){
	switch (sysch) {
	case 'd': case 'D': case '1': return pre2_10(a); break;
	case 'h': case 'H': case '8': return pre2_8(a); break;
	default: cout << "�������� ������� ���������� ����� � ���������� "; return a; break;
	}
}
int pre_main(int sysch, int a){
	switch (sysch) {
	case '1': return pre2_10(a); break;
	case '8': return pre2_8(a); break;
	default: cout << "�������� ������� ���������� ����� � ���������� "; return a; break;
	}
}
void pre_main(char sysch, int a,int *res){
	switch (sysch) {
	case 'd': case 'D': case '1': (*res) = pre2_10(a); break;
	case 'h': case 'H': case '8': (*res) = pre2_8(a); break;
	default: cout << "�������� ������� ���������� ����� � ���������� "; (*res) = a; break;
	}
}
void pre_main(char sysch, int a, int &res){
	switch (sysch) {
	case 'd': case 'D': case '1': res = pre2_10(a); break;
	case 'h': case 'H': case '8': res = pre2_8(a); break;
	default: cout << "�������� ������� ���������� ����� � ���������� "; res = a; break;
	}
}

int pre2_10(int a)  
{
	int res = 0;
	int k = 0;
	int sysch = 2;
	do {
		res += (a%sysch) * pow(10, k++);
		a = a / sysch;
	} while ((a >= sysch) && (a != 0));
	res += a * pow(10,k);
	return res;
}
int pre2_8(int a){
	int res = 0;
	int k = 0;
	do {
		res += pre2_10(a%10) * pow(10, k);
		a = a / 10;
		k += 3;
		if (a % 10 >= 8){
			cout << "�������� �����";
			_getch();
			exit;
		}
	} while ((a >= 10) && (a != 0));
	res += a * pow(10, k);
	return res;

}

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float a, b, x;
	x = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "��������:" << endl;
		cout << "�����: ";
		cin >> a;
		cout << "��������� ������: ";
		cin >> b;
		x += a * b;
	}
	cout << "����� �����, ������������ ������ �� ���: " << x << endl;
	cout << "������� �������� � �������: " << x / 5;
}
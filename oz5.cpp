#include<iostream>
using namespace std;

float calc(float(a), float(b))
{
	return (a * b);
}
void main()
{
	setlocale(LC_ALL, "");
	float a, b;
	int c[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> a >> b;
		c[i] = calc(a, b);
	}
	if (c[0] > c[1])
	{
		cout << "�1 ��������� ������" << endl;
	}
	else
	{
		cout << "�2 ��������� ������" << endl;
	}
	cout << "�����, ������������ ����� ����������� ������: " << c[0] + c[1] << endl;
}
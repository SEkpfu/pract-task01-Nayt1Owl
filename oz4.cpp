#include<iostream>
using namespace std;

float calc(float(a), float(b), float(c))
{
	return (a * b) * (1 + (c / 100));
}
float nal(float(a))
{
	return a * 0.13;
}
float ost(float(a))
{
	return a * 0.87;
}
int input(float& r, float& t, float& y)
{
	cout << "часов = ";
	cin >> r;
	cout << "руб за час = ";
	cin >> t;
	cout << "премия % = ";
	cin >> y;
	return 0;
}
void main()
{
	setlocale(LC_ALL, "");
	float a, b, c, z, x, v;
	input(a, b, c);
	z = calc(a, b, c);
	x = nal(z);
	v = ost(z);
	cout << "об зараб. плата: " << z << endl;
	cout << "налог: " << x << endl;
	cout << "без налога: " << v << endl;
}
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
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c, z, x, v;
	cin >> a >> b >> c;
	z = calc(a, b, c);
	x = nal(z);
	v = ost(z);
	cout << "об зараб. плата: " << z << endl;
	cout << "налог: " << x << endl;
	cout << "без налога: " << v << endl;
	return 0;
}
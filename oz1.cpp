#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	cin >> a >> b >> c;
	cout << (a * b) * (1 + (c / 100));
	return 0;
}
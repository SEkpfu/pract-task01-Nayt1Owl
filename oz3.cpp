#include<iostream>
using namespace std;

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
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	input(a, b, c);
	return 0;
}
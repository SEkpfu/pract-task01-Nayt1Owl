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
		cout << "№1 заработал больше" << endl;
	}
	else
	{
		cout << "№2 заработал больше" << endl;
	}
	cout << "Сумма, заработанная двумя работниками вместе: " << c[0] + c[1] << endl;
}
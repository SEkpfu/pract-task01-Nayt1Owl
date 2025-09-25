#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float a, b, x;
	x = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Работник:" << endl;
		cout << "Часов: ";
		cin >> a;
		cout << "Почасовая ставка: ";
		cin >> b;
		x += a * b;
	}
	cout << "Общая сумма, заработанная каждым из них: " << x << endl;
	cout << "Средняя зарплата в бригаде: " << x / 5;
}
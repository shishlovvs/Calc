#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	double a, b;
	char s;
	cout << "Введите арифметическое действие: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
		cout << a << "+" << b << "=" << a + b << endl;
	else if (s == '-')
		cout << a << "-" << b << "=" << a - b << endl;
	else if (s == '*')
		cout << a << "*" << b << "=" << a * b << endl;
	else if (s == '/')
		cout << a << "/" << b << "=" << a / b << endl;
	else
		cout << "Error: NoOperation" << endl;
}
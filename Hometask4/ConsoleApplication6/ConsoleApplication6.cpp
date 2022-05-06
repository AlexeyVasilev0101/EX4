#include<iostream>
#include"Header.h"
void main()
{
	setlocale(LC_ALL, "Rus");
	float a;
	float b;
	std::cout << "Введите a: \n";
	std::cin >> a;
	std::cout << "Введите b: \n";
	std::cin >> b;
	foo(a,b,0);
}
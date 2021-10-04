#include <iostream>
int main()
{
	//Нахождение площади и периметра прямоугольника
	float a, b, S, P;
	std::cout << "Enter sides of rectangle: ";
	std::cin >> a >> b;
	S = a * b;
	P = (a + b) * 2;
	std::cout << "S = " << S << '\n';
	std::cout << "P = " << P << '\n' << '\n'; //Второй перенос строки просто для красоты в консоли

	//Нахождение длины окружности
	float d, L;
	const float Pi = 3.14;
	std::cout << "Enter diameter of the circle: ";
	std::cin >> d;
	L = Pi * d;
	std::cout << "L = " << L << '\n' << '\n';

	//Нахождение среднего арифметического двух чисел
	float average;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	average = (a + b) / 2;
	std::cout << "Average = " << average << '\n' << '\n';

	//Нахождение суммы, разности, произведения и частного квадратов двух чисел
	double sum, dif, pr, quo;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	sum = pow(a, 2) + pow(b, 2);
	dif = pow(a, 2) - pow(b, 2);
	pr = pow(a, 2) * pow(b, 2);
	quo = pow(a, 2) / pow(b, 2);
	std::cout << "Sum = " << sum << '\n' << "Difference = " << dif << '\n' << "Product = " << pr << '\n' << "Quotient = " << quo << '\n';
	
	//Нахождение суммы, разности, произведения и частного модулей двух чисел
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	sum = abs(a) + abs(b);
	dif = abs(a) - abs(b);
	pr = abs(a) * abs(b);
	quo = abs(a) / abs(b);
	std::cout << "Sum = " << sum << '\n' << "Difference = " << dif << '\n' << "Product = " << pr << '\n' << "Quotient = " << quo << '\n';
	return 0;
}
#include <iostream>
int main()
{
	//���������� ������� � ��������� ��������������
	float a, b, S, P;
	std::cout << "Enter sides of rectangle: ";
	std::cin >> a >> b;
	S = a * b;
	P = (a + b) * 2;
	std::cout << "S = " << S << '\n';
	std::cout << "P = " << P << '\n' << '\n'; //������ ������� ������ ������ ��� ������� � �������

	//���������� ����� ����������
	float d, L;
	const float Pi = 3.14;
	std::cout << "Enter diameter of the circle: ";
	std::cin >> d;
	L = Pi * d;
	std::cout << "L = " << L << '\n' << '\n';

	//���������� �������� ��������������� ���� �����
	float average;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	average = (a + b) / 2;
	std::cout << "Average = " << average << '\n' << '\n';

	//���������� �����, ��������, ������������ � �������� ��������� ���� �����
	double sum, dif, pr, quo;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	sum = pow(a, 2) + pow(b, 2);
	dif = pow(a, 2) - pow(b, 2);
	pr = pow(a, 2) * pow(b, 2);
	quo = pow(a, 2) / pow(b, 2);
	std::cout << "Sum = " << sum << '\n' << "Difference = " << dif << '\n' << "Product = " << pr << '\n' << "Quotient = " << quo << '\n';
	
	//���������� �����, ��������, ������������ � �������� ������� ���� �����
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	sum = abs(a) + abs(b);
	dif = abs(a) - abs(b);
	pr = abs(a) * abs(b);
	quo = abs(a) / abs(b);
	std::cout << "Sum = " << sum << '\n' << "Difference = " << dif << '\n' << "Product = " << pr << '\n' << "Quotient = " << quo << '\n';
	return 0;
}
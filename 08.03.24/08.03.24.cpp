#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//1

	int same = 0;

	std::cout << "=======������ 1=======\n\n";
	std::cout << "���������� ���������� ����� ����� � ��������� �� 100 �� 999, � ������� ���� ��� ���������� �����.\n\n";

	for (int i = 100; i <= 999; i++)
	{
		if (i / 100 % 10 == i / 10 % 10 or i / 100 % 10 == i % 10 or i / 10 % 10 == i % 10)
		{
			same++;
		}
	}

	std::cout << "���������� ����� ����� � ��������� �� 100 �� 999, � ������� ���� ��� ���������� �����: " << same;

	//2

	int notsame = 0;

	std::cout << "\n\n=======������ 2=======\n\n";
	std::cout << "���������� ���������� ����� ����� � ��������� �� 100 �� 999, � ������� ��� ����� ������.\n\n";

	for (int i = 100; i <= 999; i++)
	{
		if (i / 100 % 10 != i / 10 % 10 != i % 10)
		{
			notsame++;
		}
	}

	std::cout << "���������� ����� ����� � ��������� �� 100 �� 999, � ������� ��� ����� ������: " << notsame;

	//3

	int number1 = 0;
	int res = 0;
	int mul = 1;
	std::cout << "\n\n=======������ 3=======\n\n";
	std::cout << "������������ ������ �����. ���������� �� ����� ����� ������� ��� ����� 3 � 6 � ������� ������� �� �����.\n\n";
	std::cout << "������� ����� ����� �����: ";
	std::cin >> number1;

	while (number1 > 0)
	{
		int digit = number1 % 10;
		number1 /= 10;
		if (digit != 3 && digit != 6)
		{
			res += digit * mul;
			mul *= 10;
		}
	}

	std::cout << "\n���������: " << res;

	//4

	int A = 0;

	std::cout << "\n\n=======������ 4=======";

	std::cout << "\n\n������� ����� ����� A: ";
	std::cin >> A;

	std::cout << "\n����� ������� ������� �� B*B ��� �������: ";

	for (int i = 1; i * i <= A; i++) {
		if (A % (i * i) == 0 && A % (i * i * i) != 0) {
			std::cout << i << " ";
		}
	}

	//5
	
	A = 0;

	std::cout << "\n\n=======������ 5=======";

	std::cout << "\n\n������� ����� ����� A: ";
	std::cin >> A;

	int sumDig = 0;
	int A1 = A;

	while (A1 != 0) 
	{
		int digit = A1 % 10;
		sumDig += digit;
		A1 /= 10;
	}

	int sumCubed = sumDig * sumDig * sumDig;
	int sqA = A * A;

	if (sumCubed == sqA) 
	{
		std::cout << "\n��� ����� ���� ����� ����� A*A";
	}
	else 
	{
		std::cout << "\n��� ����� ���� ����� �� ����� A*A";
	}

	//6

	int num;

	std::cout << "\n\n=======������ 6=======";

	std::cout << "\n\n������� ����� �����: ";
	std::cin >> num;

	std::cout << "\n��� �����, ��������� �� �������� ����� ��� �������: ";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			std::cout << i << " ";
		}
	}

	//7

	int num1, num2;

	std::cout << "\n\n=======������ 7=======";

	std::cout << "\n\n������� ������ �����: ";
	std::cin >> num1;

	std::cout << "\n������� ������ �����: ";
	std::cin >> num2;

	std::cout << "\n�����, �� ������� ��� ����� ������� ��� �������: ";
	for (int i = 1; i <= num1 && i <= num2; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			std::cout << i << " ";
		}
	}

	std::cout << "\n";


	return 0;
}

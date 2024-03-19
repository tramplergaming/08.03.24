#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//1

	int same = 0;

	std::cout << "=======ЗАДАЧА 1=======\n\n";
	std::cout << "Подсчитать количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры.\n\n";

	for (int i = 100; i <= 999; i++)
	{
		if (i / 100 % 10 == i / 10 % 10 or i / 100 % 10 == i % 10 or i / 10 % 10 == i % 10)
		{
			same++;
		}
	}

	std::cout << "Количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры: " << same;

	//2

	int notsame = 0;

	std::cout << "\n\n=======ЗАДАЧА 2=======\n\n";
	std::cout << "Подсчитать количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные.\n\n";

	for (int i = 100; i <= 999; i++)
	{
		if (i / 100 % 10 != i / 10 % 10 != i % 10)
		{
			notsame++;
		}
	}

	std::cout << "Количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные: " << notsame;

	//3

	int number1 = 0;
	int res = 0;
	int mul = 1;
	std::cout << "\n\n=======ЗАДАЧА 3=======\n\n";
	std::cout << "Пользователь вводит число. Необходимо из этого числа удалить все цифры 3 и 6 и вывести обратно на экран.\n\n";
	std::cout << "Введите любое целое число: ";
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

	std::cout << "\nРезультат: " << res;

	//4

	int A = 0;

	std::cout << "\n\n=======ЗАДАЧА 4=======";

	std::cout << "\n\nВведите целое число A: ";
	std::cin >> A;

	std::cout << "\nЧисла которые делятся на B*B без остатка: ";

	for (int i = 1; i * i <= A; i++) {
		if (A % (i * i) == 0 && A % (i * i * i) != 0) {
			std::cout << i << " ";
		}
	}

	//5
	
	A = 0;

	std::cout << "\n\n=======ЗАДАЧА 5=======";

	std::cout << "\n\nВведите целое число A: ";
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
		std::cout << "\nКуб суммы цифр числа равен A*A";
	}
	else 
	{
		std::cout << "\nКуб суммы цифр числа не равен A*A";
	}

	//6

	int num;

	std::cout << "\n\n=======ЗАДАЧА 6=======";

	std::cout << "\n\nВведите целое число: ";
	std::cin >> num;

	std::cout << "\nВсе числа, делящиеся на заданное число без остатка: ";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			std::cout << i << " ";
		}
	}

	//7

	int num1, num2;

	std::cout << "\n\n=======ЗАДАЧА 7=======";

	std::cout << "\n\nВведите первое число: ";
	std::cin >> num1;

	std::cout << "\nВведите второе число: ";
	std::cin >> num2;

	std::cout << "\nЧисла, на которые оба числа делятся без остатка: ";
	for (int i = 1; i <= num1 && i <= num2; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			std::cout << i << " ";
		}
	}

	std::cout << "\n";


	return 0;
}

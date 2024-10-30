#include <iostream>

//Задача 1
void Grade(double grade1, double grade2, double grade3, double grade4, double grade5, double* result) {
	*result = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
	if (*result == 4) {
		std::cout << "Средний балл студента = " << *result << "\n";
		std::cout << "Допущен\n";
	}
	else if (*result > 4) {
		std::cout << "Средний балл студента = " << *result << "\n";
		std::cout << "Допущен\n";
	}
	else {
		std::cout << "Средний балл студента = " << *result << "\n";
		std::cout << "Не допущен\n";
		std::cout << "\n";
	}
}
//Задача 2
void Number(int* N) {
	if (*N % 2 == 0) {
		std::cout << "Ваш результат = " << *N * 3 << "\n";
		std::cout << "\n";
	}
	else {
		std::cout << "Ваш результат = " << (double)*N / 2 << "\n";
		std::cout << "\n";
	}
}

//Задача 3
void Calculator(double n1, double n2, char A, double* R) {
	if ((A == '/') && (n2 == 0)) {
		std::cout << "На ноль делить нельзя.";
	}
	else if (A == '/') {
		*R = n1 / (n2);
		std::cout << "Ваш результат = " << *R;
	}
	if (A == '+') {
		*R = n1 + (n2);
		std::cout << "Ваш результат = " << *R;
	}
	if (A == '-') {
		*R = n1 - (n2);
		std::cout << "Ваш результат = " << *R;
	}
	if (A == '*') {
		*R = n1 * (n2);
		std::cout << "Ваш результат = " << *R;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");

	//Задача 1
	std::cout << "Задача №1 \n";
	std::cout << "Введите пять оценок студента от 1 до 5 \n";
	std::cout << "Программа рассчитает, допущен ли студент к экамену \n";
	double grade1, grade2, grade3, grade4, grade5;
	std::cin >> grade1;
	std::cin >> grade2;
	std::cin >> grade3;
	std::cin >> grade4;
	std::cin >> grade5;
	double* result = new double[0];
	Grade(grade1, grade2, grade3, grade4, grade5, result);
	delete[] result;

	//Задача 2
	std::cout << "Задача №2 \n";
	std::cout << "Введите любое число, если оно четное программа умножит на три, если нет разделит на два.\n";
	int* A = new int[0];
	std::cin >> *A;
	Number(A);
	delete[] A;

	//Задача 3
	std::cout << "Задача №3 \n";
	std::cout << "Это небольшая программа калькулятор.\n";
	std::cout << "Введите два числа.\n";
	double number1{};
	std::cin >> number1;
	double number2{};
	std::cin >> number2;
	std::cout << "Нажмите на клавиатуре арифметическое действие:\n";
	std::cout << "Сложить + \n";
	std::cout << "Вычесть - \n";
	std::cout << "Разделить / \n";
	std::cout << "Умножить * \n";
	char action;
	std::cin >> action;
	double* result1 = new double[0];
	Calculator(number1, number2, action, result1);
	delete[] result1;

	return 0;
}
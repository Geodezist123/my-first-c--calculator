#include <iostream>

int main() {

double num1, num2, result;

char op;

std::cout << "Enter first number: ";
std::cin >> num1;

std::cout << "Enter operator (+, -, *, /): ";
std::cin >> op;

std::cout << "Enter second number: ";
std::cin >> num2;

switch(op) {
	case '+':
		result = num1 + num2;
	break;
	
	case '-':
		result = num1 - num2;
	break;

	case '*':
		result = num1 * num2;
	break;

	case '/':
		if (num2 == 0) {
			std::cout << "Error: Division by zero!" << std::endl;
			return 1;
		}
		result = num1 / num2;
		break;
	default:
		std::cout << "Error! Invalid operator!" << std::endl;
		return 1;
	}

std::cout << "Result: " << result << std::endl;

return 0;

}


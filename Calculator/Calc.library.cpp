#include <iostream>

enum Operation {PLUS, MINUS, MULTIPLY, DIVIDE, NONE};

Operation getOperation(char op){
	if (op == '+')
		return PLUS;
	else if (op == '-')
		return MINUS;
	else if (op == '*')
		return MULTIPLY;
	else if (op == '/')
		return DIVIDE;
	return NONE;
}

bool parse(const char* expression, double& a, double& b, Operation& c) {
	const char* op = strpbrk(expression, "+-*/");
	if (op == nullptr)
		return false;

	a = atof(expression);
	c = getOperation(*op);

	op++;
	b = atof(op);
	return true;
}

double plus(double a, double b) {
	return a + b;
}

double minus(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}

double calculate(const char* expression){
	double (*action[])(double, double) = {
		plus, minus, multiply, divide
	};

	double a;
	double b;
	Operation c;

	bool parse_correct = parse(expression, a, b, c);
	if (!parse_correct) {
		return 0;
	}

	return action[c](a, b);
}
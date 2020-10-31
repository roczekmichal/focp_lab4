#include <iostream>

int main()
{
	int variable = 8;

	int* ptr;
	ptr = &variable;

	std::cout << "Show the value of pointer using adress of variable (&): " << *ptr << std::endl;

	std::cout << "Variable not changed: " << variable << std::endl;

	*ptr = 20;

	std::cout << "Variable changed using *ptr pointer: " << variable << std::endl;

	return 0;
}

#include <iostream>
#include <array>



int main()
{
	/*
	int variable = 8;

	int* ptr;
	ptr = &variable;

	std::cout << "Show the value of pointer using adress of variable (&): " << *ptr << std::endl;

	std::cout << "Variable not changed: " << variable << std::endl;

	*ptr = 20;

	std::cout << "Variable changed using *ptr pointer: " << variable << std::endl;
	*/


	std::array <int, 4> numbers;

	for (int i = 0; i < 4; i++)
	{
		numbers[i] = i;
		//std::cout << numbers[i] << std::endl;
	}

	int* ptr_numbers = &numbers[0];

	for (int i = 0; i < 4; i++)
	{
		std::cout << *ptr_numbers << std::endl;
		++ptr_numbers;
	}


	return 0;
}

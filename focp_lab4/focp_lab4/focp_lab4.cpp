#include <iostream>
#include <array>
#include <vector>

void print_content(std::vector<int>* input)
{
	for (int i = 0; i < input->size(); i++)
	{
		std::cout << input->at(i)<< std::endl;
	}

}

void print_content2(std::vector<int>& input)
{
	for (int i = 0; i < input.size(); i++)
	{
		std::cout << input[i] << std::endl;
	}

}




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

	/*
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
	*/


	int size;
	std::cout << "Provide a size of your array: " << std::endl;
	std::cin >> size;

	std::vector<int> number;

	for (int i = 0; i < size; i++)
	{
		number.push_back(i);
	}

	//print_content(&number);
	print_content2(number);

	return 0;
}

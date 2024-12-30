#include <iostream>
#include <iomanip>

int main()
{
	std::string employeeOne = "Steve";
	std::string employeeTwo = "Bob";

	//this is an array of strings
	std::string employees[] = { "Steve", "Bob", "Allen" };

	//if you use an index out of bounds of an array, it will do undefined behavior
	std::cout << employees[2] << std::endl;

	employees[1] = "Adam";

	std::cout << employees[1] << std::endl;
	std::cout << sizeof(employees) / sizeof(std::string) << std::endl;
}
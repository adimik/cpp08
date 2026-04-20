#include "../include/Span.hpp"
#include <iostream>

int main(void)
{
	// Test from subject
	std::cout << "=== Test from subject ===" << std::endl;
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Test with exception when full
	std::cout << "\n=== Test adding to full Span ===" << std::endl;
	try
	{
		sp.addNumber(99);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test with large number of elements
	std::cout << "\n=== Test with 10000 numbers ===" << std::endl;
	Span sp2(10000);
	for (int i = 0; i < 10000; i++)
		sp2.addNumber(i);
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

	// Test with iterator range
	std::cout << "\n=== Test with addNumbers (iterator range) ===" << std::endl;
	int arr[] = {1, 5, 3, 9, 2};
	Span sp3(5);
	sp3.addNumbers(arr, arr + 5);
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;

	// Test exception with not enough numbers
	std::cout << "\n=== Test exception with single number ===" << std::endl;
	Span sp4(2);
	sp4.addNumber(42);
	try
	{
		sp4.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
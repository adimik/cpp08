#include "../include/Span.hpp"
#include <iostream>

Span::Span(unsigned int N) : N(N)
{
	numbers.reserve(N);
}

Span::~Span()
{
	numbers.clear();
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		numbers = other.numbers;
		N = other.N;
	}
	return (*this);
}

Span::Span(const Span& other) : N(other.N)
{
	*this = other;
}

void Span::addNumber(int n)
{
	if (numbers.size() >= (size_t)N)
		throw std::out_of_range("Span is full");
	numbers.push_back(n);
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::out_of_range("Not enough numbers to find a span");
	
	std::vector<int> sorted_numbers = numbers;
	std::sort(sorted_numbers.begin(), sorted_numbers.end());
	
	int shortest = sorted_numbers[1] - sorted_numbers[0];
	for (size_t i = 2; i < sorted_numbers.size(); i++)
	{
		int span = sorted_numbers[i] - sorted_numbers[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::out_of_range("Not enough numbers to find a span");
	
	int min = *std::min_element(numbers.begin(), numbers.end());
	int max = *std::max_element(numbers.begin(), numbers.end());
	return (max - min);
}
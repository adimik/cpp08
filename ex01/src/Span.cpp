#include "../include/Span.hpp"
#include <iostream>

Span::Span(unsigned int N)
{
    numbers.reserve(N);
}

Span::~Span()
{
    numbers.clear();
}

Span& Span:: operator=(const Span& other){
    if (this != &other)
    {
        numbers = other.numbers;
    }
    return(*this);
}

Span::Span(const Span& other) {
    *this = other;
}

void Span::addNumber(int n)
{
    if(numbers.size() >= numbers.capacity())
        throw std::out_of_range("Span is full");
    numbers.push_back(n);
}

int Span::shortestSpan(){
    if(numbers.size() < 2)
        throw std::out_of_range("Not enough numbers to find a span");
    std::vector<int>::iterator pt = numbers.begin();
    std::sort(pt, numbers.end());
    int temp = *pt;
    pt++;
    int shortestSpan = *pt - temp;
    while(pt != numbers.end())
    {
        temp = *pt;
        pt++;
        if(pt == numbers.end())
            break;
        if(shortestSpan > (*pt - temp))
            shortestSpan = *pt - temp;
    }
    return(shortestSpan);
}

int Span::longestSpan() {
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return(max - min);
}
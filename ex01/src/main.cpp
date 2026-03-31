#include "../include/Span.hpp"
#include <iostream>

int main(void){
    Span sp(5);
    sp.addNumber(88);
    sp.addNumber(20);
    sp.addNumber(14);
    sp.addNumber(10);
    try{
        sp.addNumber(99);
    }
    catch(std::exception s)
    {
        std::cout << "out of range" << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    Span sp2(30000);
    int i = 0;
    while(i < 30000)
    {
        sp2.addNumber(i);
        i++;
    }
    return(0);
}
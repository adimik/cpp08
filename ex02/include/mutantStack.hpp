#pragma once
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return (*this);
    }
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
        return (this->c.begin());
    }

    iterator end()
    {
        return (this->c.end());
    }
};

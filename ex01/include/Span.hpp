#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
private:
    std::vector<int> numbers;
public:
    Span(unsigned int N);
    ~Span();
    Span& operator=(const Span& other);
    Span(const Span& other);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
};

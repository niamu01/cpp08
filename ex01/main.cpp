#include "Span.hpp"

int main()
{

	std::cout << "-----TEST 1-----" << std::endl;
	Span sp = Span(10000)
	

	std::cout << "-----SUBJECT TESTCASE-----";

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

/*
$> ./ex01
2
14
*/
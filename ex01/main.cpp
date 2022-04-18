#include "Span.hpp"

int main()
{

	std::cout << "-----TEST 1-----" << std::endl;
	Span span(10000);
	
	// Functor
	FillMultiSet func(0);
	
	// Inserting in the multiset x numbers using a functor
	std::generate_n(std::inserter(span.getMultisetInt(), span.getMultisetInt().begin()), span.getSize(), func);

	std::cout << "Printing first 10 numbers: ";
	
	// Using a pair so we can check if we don't go futher than the end of the set when printing first 10 elements
	for (std::pair<int, std::multiset<int>::iterator> i(0, span.getMultisetInt().begin());
			i.first < 10 && i.second != span.getMultisetInt().end(); i.first++, i.second++)
		std::cout << *i.second << " ";
		
	std::cout << "\nLongest: " << span.longestSpan() << ", shortest: " << span.shortestSpan() << "\n";

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
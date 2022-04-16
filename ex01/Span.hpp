#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
private:
	unsigned int _N;
	std::set<int> _set;
	//Span()

public:
	Span(unsigned int N);
	Span(Span const &rhs);
	~Span();

	//swap?

	unsigned int getN() const;

	std::set<int>& getSet();

	//Span & operator=(Span const &rhs);

	void addNumber(int add);
	int shortestSpan() const; //unsigned int?
	int longestSpan() const;

};

#endif
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
private:
	unsigned int _n;

public:
	Span();
	Span(Span const &rhs);
	~Span();

	Span & operator=(Span const &rhs);



};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:56:14 by yeju              #+#    #+#             */
/*   Updated: 2022/04/18 21:56:15 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _set()
{
	cantExec = 0;
}

Span::Span(Span const &rhs) : _N(rhs._N), _set(rhs._set)
{
	cantExec = rhs.cantExec;
}

Span::~Span()
{
}

Span & Span::operator=(Span const &rhs)
{
	this->cantExec = rhs.cantExec;
	this->_N = rhs._N;
	this->_set = rhs._set;
	return (*this);
}

unsigned int Span::getN() const
{
	return (_N);
}

std::set<int>& Span::getSet()
{
	return (_set);
}

void Span::addNumber(int add)
{
	try
	{
		if (_set.size() == _N)
			throw Span::overFlowError();
		if (*_set.find(add) == add)
			throw Span::sameNumError();
	}
	catch (const Span::overFlowError &_throw)
	{
		std::cout << _throw.what() << std::endl;
		cantExec = 1;
		return ;
	}
	catch (const Span::sameNumError &_throw)
	{
		std::cout << _throw.what() << std::endl;
		cantExec = 1;
		return ;
	}
	_set.insert(add);
}

int Span::shortestSpan() const
{
	int ret;

	if (cantExec == 1)
		return 0;
	if (_set.size() <= 1)
		throw std::exception();
	
	ret = *(++_set.begin()) - *(_set.begin());
	
	for (std::pair<std::set<int>::iterator, std::set<int>::iterator> i(_set.begin(), ++_set.begin()); i.second != _set.end(); i.first++, i.second++)	
		if (ret > *i.second - *i.first)
			ret = *i.second - *i.first;
	return (ret);
}

int Span::longestSpan() const
{
	int ret;

	if (cantExec == 1)
		return 0;
	if (_set.size() <= 1)
		throw std::exception();
	ret = (*(--_set.end()) - *(_set.begin()));
	
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:56:36 by yeju              #+#    #+#             */
/*   Updated: 2022/04/18 21:56:37 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
private:
	unsigned int _N;
	std::set<int> _set;
	int cantExec;
	Span();

public:
	Span(unsigned int N);
	Span(Span const &rhs);
	~Span();

	unsigned int getN() const;

	std::set<int>& getSet();

	Span & operator=(Span const &rhs);

	void addNumber(int add);
	int shortestSpan() const;
	int longestSpan() const;

	class sameNumError : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("DO NOT INPUT SAME NUMBER");
		}
	};

	class overFlowError : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("ONLY N NUMBERS CAN BE ENTERED");
		}
	};
};

#endif
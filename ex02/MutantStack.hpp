/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:31:08 by yeju              #+#    #+#             */
/*   Updated: 2022/04/18 20:33:53 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>()
	{
	};

	MutantStack(const MutantStack &rhs) : std::stack<T>(rhs)
	{
	};

	~MutantStack()
	{
	};

	MutantStack<T> &operator=(const MutantStack<T> &rhs)
	{
		std::stack<T>::operator=(rhs);
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;


	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}


	reverse_iterator rbegin()
	{
		return (std::stack<T>::c.rbegin());
	}

	reverse_iterator rend()
	{
		return (std::stack<T>::c.rend());
	}


	const_iterator cbegin() const
	{
		return (std::stack<T>::c.begin());
	}
	const_iterator cend() const
	{
		return (std::stack<T>::c.end());
	}


	const_reverse_iterator rbegin() const
	{
		return (std::stack<T>::c.rbegin());
	}

	const_reverse_iterator rend() const
	{
		return (std::stack<T>::c.rend());
	}
};

#endif
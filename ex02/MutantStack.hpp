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

	MutantStack(const MutantStack &copy) : std::stack<T>(copy)
	{
	};

	~MutantStack() //virtual?
	{
	};

	MutantStack<T> &operator=(const MutantStack<T> &rhs) //MutantStack"<T>"
	{
		std::stack<T>::operator=(rhs);
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator iterator; //iterator선언

	iterator begin() //const_iterator begin() const {...
	{
		return (std::stack<T>::c.begin()); //c.~~
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}

	//const_begin, const_end, rbegin, rend, const_rbegin, const_rend도 만들어야 하는지?
};

#endif
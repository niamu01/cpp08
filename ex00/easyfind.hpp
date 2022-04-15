#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <algorithm>

#include <deque>
#include <list>
#include <vector>

template<typename T>
typename T::iterator easyfind(T & container, int i)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::exception();
	return (iter);
}

#endif

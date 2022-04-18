/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:32:05 by yeju              #+#    #+#             */
/*   Updated: 2022/04/18 21:47:45 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:32:02 by yeju              #+#    #+#             */
/*   Updated: 2022/04/16 01:32:02 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::cout << "test with vector container: " << std::endl;

		std::vector<int> vector(3, 0); //0 0 0

		vector.push_back(1); //0 0 0 1
		vector.push_back(2); //0 0 0 1 2
		vector.push_back(3); //0 0 0 1 2 3
		vector.push_back(2); //0 0 0 1 2 3 2

		std::vector<int>::iterator iter = easyfind(vector, 2);

		std::cout << *iter << std::endl;

		std::cout << "check next: ";
		iter++;
		std::cout << *iter << ", ";
		iter++;
		std::cout << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "No value found" << std::endl;
	}

	try
	{
		std::cout << "test with deque container: " << std::endl;

		std::deque<int> deque(3, 0);

		deque.push_back(1);
		deque.push_back(2);
		deque.push_back(3);

		std::deque<int>::iterator iter = easyfind(deque, 2);

		std::cout << *iter << std::endl;
		
		//std::cout << deque.size();

		//std::cout << "check next: ";
		//iter++;
		//std::cout << "size: " << deque.size() << std::endl;;
		//std::cout << *iter << ", ";
		//iter++;
		//std::cout << "size: " << deque.size() << std::endl;;
		//std::cout << *iter << std::endl;
		//iter++;
		//std::cout << "size: " << deque.size() << std::endl;;
		//std::cout << *iter << std::endl;
		//iter++;
		//std::cout << "size: " << deque.size() << std::endl;;
		//std::cout << *iter << std::endl;
		//deque.push_back(8);
		//std::cout << "size: " << deque.size() << std::endl;;
		//iter++;
		//std::cout << *iter << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "No value found" << std::endl;
	}

	try
	{
		std::cout << "test with list container: " << std::endl;

		std::list<int> list(3, 0);

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);

		std::list<int>::iterator iter = easyfind(list, 2);

		std::cout << *iter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "No value found" << std::endl;
	}
}

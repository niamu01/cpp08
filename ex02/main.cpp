/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:31:01 by yeju              #+#    #+#             */
/*   Updated: 2022/04/18 20:34:06 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "-----TEST 1-----" << std::endl;
	
	MutantStack<int> stackA;
	
	stackA.push(1);
	stackA.push(2);
	stackA.pop();
	stackA.push(3);
	stackA.push(4);
	stackA.push(5);

	std::cout << "stackA: ";
	MutantStack<int>::iterator iter;
	for(iter=stackA.begin(); iter!=stackA.end(); iter++)
		std::cout << *iter << ' ';
	std::cout << std::endl;

	std::cout << "Last Arrival Number: " << stackA.top() << " / StackA Size: " << stackA.size() << std::endl;

	std::cout << "-----TEST 2-----" << std::endl;
	MutantStack<int> stackB(stackA);

	stackB.pop();
	stackB.push(42);

	std::cout << "stackB: ";
	for(iter=stackB.begin(); iter!=stackB.end(); iter++)
		std::cout << *iter << ' ';
	std::cout << std::endl;

	std::cout << "Last Arrival Number: " << stackB.top() << " / stackB Size: " << stackB.size() << std::endl;

	std::cout << "-----TEST 3-----" << std::endl;

	stackA.pop();
	stackA.push(0);

	MutantStack<int> stackC;
	stackC = stackA;

	stackA.pop();
	stackA.push(999);

	std::cout << "stackC: ";
	for(iter=stackC.begin(); iter!=stackC.end(); iter++)
		std::cout << *iter << ' ';
	std::cout << std::endl;

	std::cout << "stackA: ";
	for(iter=stackA.begin(); iter!=stackA.end(); iter++)
		std::cout << *iter << ' ';
	std::cout << std::endl;

	std::cout << "Last Arrival Number: " << stackC.top() << " / stackC Size: " << stackC.size() << std::endl;

	std::cout << "-----SUBJECT TESTCASE-----";

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
#include <iostream>

#include "MutantStack.hpp"

int main()
{
	{
		// Test 1
		std::cout << "----- MUTANTSTACK POP / PUSH PROPERTIES -----\n";
		
		MutantStack<int> mstack;
		
		mstack.push(1);
		mstack.push(2);
		mstack.pop();
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);

		std::cout << "Stack last is: " << mstack.top() << " and stack size is: " << mstack.size() << "\n";

		// Test 2
		std::cout << "\n----- CREATING A MUTANTSTACK WITH COPY CONSTRUCTOR ------\n";
		MutantStack<int> mstack2(mstack);

		// Modifying the object that was use for copy, the new one created must now differ
		mstack.pop();
		mstack.push(999);

		std::cout << "Stack last is: " << mstack2.top() << " and stack size is: " << mstack2.size() << "\n";


		// Test 3
		std::cout << "\n----- CREATING A MUTANTSTACK WITH COPY CONSTRUCTOR ------\n";

		// Restoring basic configuration the mstack object
		mstack.pop();
		mstack.push(0);

		MutantStack<int> mstack3;
		mstack3 = mstack;

		// Modifying the object that was use for assignment, the new one created must now differ
		mstack.pop();
		mstack.push(999);

		std::cout << "Stack last is: " << mstack3.top() << " and stack size is: " << mstack3.size() << "\n";
	}

	{
		std::cout << "\n----- TESTS FROM SUBJECT -----\n";
		
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		
		std::cout << "top num is " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "after pop the size is " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "clear stack" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(7);
		mstack.push(9);
		
		// iterator is a typedef
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		// Bidirectional iterator
		++it;
		--it;
		
		// Printing the stack using iterators
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	return (0);
}
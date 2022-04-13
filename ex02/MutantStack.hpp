#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

class MutantStack : public std::stack
{
private:

public:
	MutantStack();
	MutantStack(MutantStack const &rhs);
	~MutantStack();

	MutantStack & operator=(MutantStack const &rhs);

}

#endif
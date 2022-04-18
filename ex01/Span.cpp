#include "Span.hpp"

/* 뭔지 찾아보기
- set<int> s(0)과 set<int> s의 차이 (0을 채워넣은것과 아예 빈배열?)

*/

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

//Span & Span::operator=(Span const &rhs)
//{
//	// 이걸 어케할지 모르겟다~~
//}

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
	_set.insert(add); //insert하면서 자동으로 정렬, 같은숫자 알아서 제외 (하지만 throw로 예외처리를 해줘야한다. 반환값 있는지 확인하기)
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

#include "Span.hpp"

/* 뭔지 찾아보기
- set<int> s(0)과 set<int> s의 차이 (0을 채워넣은것과 아예 빈배열?)

*/


Span::Span(unsigned int N) : _N(N), _set()
{
}

Span::Span(Span const &rhs) : _N(rhs._N), _set(rhs._set)
{
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
	if (_set.size() == _N)
		throw std::exception();
	_set.insert(add); //insert하면서 자동으로 정렬, 같은숫자 알아서 제외 (하지만 throw로 예외처리를 해줘야한다. 반환값 있는지 확인하기)
}

int Span::shortestSpan() const //들어있는 숫자들 중 이웃하는 숫자의 차이를 구하고 그 값이 가장 작은것
{
	int ret;

	if (_set.size() <= 1) //저장된 숫자가 없거나 하나만 있으면 throw
		throw std::exception();
	
	ret = *(++_set.begin()) - *(_set.begin()); //포인터로 움직임
	
	//for (unsigned int i = 0; i < _set.size() - 1; i++)
	//{
		//if (ret > _set[i + 1] - _set[i])
		//	ret = _set[i + 1] - _set[i];
	for (std::pair<std::multiset<int>::iterator, std::multiset<int>::iterator> i(_set.begin(), ++_set.begin()); i.second != _set.end(); i.first++, i.second++)	
		if (ret > *i.second - *i.first)
			ret = *i.second - *i.first; //@pair을 사용해 for문 완성
	return (ret);
}

int Span::longestSpan() const //들어있는 숫자들 중 가장 작은거 & 큰거의 차이
{
	int ret;

	if (_set.size() <= 1)
		throw std::exception();
	ret = (*(--_set.end()) - *(_set.begin()));
	
	return (ret);
}

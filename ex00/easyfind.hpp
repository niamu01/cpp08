#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// #include <algorithm>

#include <iostream>

#include <vector>
#include <deque>
#include <list>

// #include <stdexcept>
// #include <string>

template <typename T>
typename T::iterator easyfind(T* container, int value)
{
	typename T::iterator iter = std::find(std::begin(*container), std::end(*container), value);

	if (iter == std::end(*container))
		throw std::runtime_error(std::string("Value ") + std::to_string(value) + std::string(" is not in C"));
	return iter;
}

class returnError : std::exception
{
		virtual const char* what() const throw()
		{
				return ("Error!\n");
		};
};
/*

template <typename T>
void easyfind(T& container, int value)
{
		return std::find(container.begin(). container.end(), find);
}
*/
//T가 int의 컨테이너라고 가정하면 이 함수는 매개변수1에서 매개변수2의 첫번째 발생을 찾아야한다.
//못찾으면 throw 혹은 오류값 반환
//표준 컨테이너는 어떻게 작동하나요?


//자체테스트를 구현후 제출하시오

//연관 컨테이너를 처리할 필요가 없습니다.


#endif
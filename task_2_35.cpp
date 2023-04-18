#include <iostream>

int main() {
	const int i = 42;
	auto j = i; // auto убирает const верхнего уровня
	const auto &k = i;
	auto *p = &i; // const int *p - указатель на const int
	const auto j2 = i, &k2 = i;

	std::cout << j << std::endl;
	j = 43;
	std::cout << j << std::endl;

	std::cout << k << std::endl;
//	k = 43; - ссылка на const int. изменять нельзя

	std::cout << *p << std::endl;
//	*p = 100; - ошибка. ссылка на const int
	
	std::cout << "j2 = " << j2 << ", k2 = " << k2 << std::endl;
//	j2 = 43; - ошибка. j2 - const int
//	k2 = 44; - ошибка. k2 - ссылка на const int&
}

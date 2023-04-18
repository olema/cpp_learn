#include <iostream>

constexpr int cb = 100;

int main() {
	int *p = nullptr;
	int a = 10;
	int b = 20;
	constexpr int ca = 30;
	int *const pi = &a;
	const int *pc = &ca;
	constexpr int *pi2 = 0;
	constexpr const int *pi3 = &cb;
	int null = 0, *pn = 0;

//	pi = p;
	*pi = *pi +1;
//	pi = &ca;
	
	pc = &a;


	p = &a;

	std::cout << *p << std::endl;

	*p = *p + 1;

	std::cout << *p << std::endl;
	std::cout << a << std::endl;
//	std::cout << wctype(ca) << std::endl;

	return 0;
}

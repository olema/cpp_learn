#include <iostream>

typedef char *pstring;
using c = char;

int main() {

	const pstring cstr = 0;
	char a = 'A';
	char b = 'B';
	int i = 1, j = 10;
	c c = 128;
	const char *pa = &c;
	const int *pi = &i;
	constexpr int ci = 100;
	int *const pi2 = &i;
	int *pi3;
	auto f = i;

	std::cout << f << "\n";

	pi3 = &j;
	//ci = 200;

	std::cout << *pa << std::endl;

	pa = &b;

	std::cout << *pa << std::endl;

	b = 'C';

	std::cout << *pa << std::endl;

	pa = &c;

	std::cout << *pi << std::endl;

	i = 2;
	
	std::cout << *pi << std::endl;

	pi = &j;
	
	std::cout << *pi2 << std::endl; 

//	pi2 = &j;

//	*pi = *pi + 1;
}

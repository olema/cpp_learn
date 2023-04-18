#include <iostream>

int main() {

	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
//	auto &h = 42;
	const auto &j = 42;
	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
//	auto &n = i, *p2 = &ci;
	
	a = 42;
	std::cout << "a = " << a << "\n";
	b = 42;
	std::cout << "b = " << b << "\n";
	c = 42;
	std::cout << "c = " << c << "\n";
//	d = 42;
//	e = 42;
//	g = 42;
}

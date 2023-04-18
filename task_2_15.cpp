#include <iostream>

int main() {
	int ival = 1.01;
//	int &rval1 = 1.01;
	int &rval2 = ival;
//	int &rval3;

	std::cout << rval2 << std::endl;
}

#include <iostream>

int main() {
	 int *p = nullptr;
	 int a = 10, b = 20;

	 p = &a;

	 std::cout << a << std::endl;

	 *p = *p + 1;
	 std::cout << a << std::endl;
}
	 
	 

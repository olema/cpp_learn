#include <iostream>

int main() {
	struct Sales_data {
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
	};

	Sales_data accum, trans, *salesptr;
	salesptr = &trans;

	trans.bookNo = "1kjhkjh";

	std::cout << trans.bookNo << std::endl;
	std::cout << salesptr->bookNo << std::endl;
}

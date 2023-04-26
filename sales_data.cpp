#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main() {

	Sales_data data1, data2;
	double price = 0;
	string s1;
	string s2("oaoaoaoa");
	string s3 = "kjsdhfkdsjfdskjh";

	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			cout << totalRevenue/totalCnt << endl;
		else
			cout << "(no sales)" << endl;
		s1 = "fddfsfs";
		cout << s1 << ", " << s2 << ", " << s3 << endl;
		return 0;
	} else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}
}


#include "figure.hpp"
#include <iostream>
#include <string>


void Figure::get_name() {
	std::cout << name << std::endl;
}

int ang_sum(int x, int y, int z) {
	int ang_sum = x + y + z;
	return ang_sum;
}

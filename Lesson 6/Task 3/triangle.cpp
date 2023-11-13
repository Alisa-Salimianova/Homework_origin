#include "figure.hpp"
#include "triangle.hpp"
#include <iostream>

void Triangle::get_name() {
	std::cout << name << std::endl;
}

void Triangle::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
}

void Triangle::get_angle() {
	std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Triangle::Triangle() {
	sides_count = 3;
	side_a = 10;
	side_b = 20;
	side_c = 30;

	ang_X = 80;
	ang_Y = 40;
	ang_Z = 60;
}

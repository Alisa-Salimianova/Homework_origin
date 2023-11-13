#include "figure.hpp"
#include "triangle.hpp"
#include "Right_Triangle.hpp"
#include <iostream>


void Right_Triangle::get_name() {
	std::cout << name << std::endl;
}

void Right_Triangle::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
}

void Right_Triangle::get_angle() {
	std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Right_Triangle::Right_Triangle() {
	sides_count = 3;
	side_a = 30;
	side_b = 40;
	side_c = 60;

	ang_X = 90;
	ang_Y = 30;
	ang_Z = 60;
}
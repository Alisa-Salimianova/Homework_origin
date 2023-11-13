#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"
#include <iostream>


void Rectangle::get_name() {
	std::cout << name << std::endl;
}

void Rectangle::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
}

void Rectangle::get_angle() {
	std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Rectangle::Rectangle() {
	sides_count = 4;
	side_a = side_b = 40;
	side_c = side_d = 30;

	ang_W = ang_X = ang_Y = ang_Z = 90;
}
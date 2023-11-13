#include "figure.hpp"
#include "Quadrilateral.hpp"
#include <iostream>

void Quadrilateral::get_name() {
	std::cout << name << std::endl;
}

void Quadrilateral::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
}

void Quadrilateral::get_angle() {
	std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Quadrilateral::Quadrilateral() {
	sides_count = 4;
	side_a = 11;
	side_b = 12;
	side_c = 25;
	side_d = 64;

	ang_W = 60;
	ang_X = 70;
	ang_Y = 55;
	ang_Z = 75;
}
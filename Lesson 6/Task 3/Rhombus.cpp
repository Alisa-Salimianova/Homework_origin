#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"
#include "Rhombus.hpp"
#include <iostream>


void Rhombus::get_name() {
	std::cout << name << std::endl;
}

void Rhombus::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
}

void Rhombus::get_angle() {
	std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Rhombus::Rhombus() {
	side_a = side_b = side_c = side_d = 17;

	ang_W = ang_X = 80;
	ang_Y = ang_Z = 100;
}
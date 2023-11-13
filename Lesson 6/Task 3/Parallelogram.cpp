#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"
#include <iostream>


void Parallelogram::get_name() {
	std::cout << name << std::endl;
}

void Parallelogram::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
}

void Parallelogram::get_angle() {
	std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Parallelogram::Parallelogram() {
	sides_count = 4;
	side_a = side_b = 50;
	side_c = side_d = 35;

	ang_W = ang_X = 70;
	ang_Y = ang_Z = 110;
}
#include "figure.hpp"
#include "triangle.hpp"
#include "Equilateral_Triangle.hpp"
#include <iostream>


void Equilateral_Triangle::get_name() {
	std::cout << name << std::endl;
}

void Equilateral_Triangle::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
}

void Equilateral_Triangle::get_angle() {
	std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Equilateral_Triangle::Equilateral_Triangle() {
	sides_count = 3;
	side_a = side_b = side_c = 35;
	ang_X = ang_Y = ang_Z = 60;
}
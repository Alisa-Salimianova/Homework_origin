#include "figure.hpp"
#include "triangle.hpp"
#include "Isosceles_Triangle.hpp"
#include <iostream>


void Isosceles_Triangle::get_name() {
	std::cout << name << std::endl;
}

void Isosceles_Triangle::get_sides() {
	std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
}

void Isosceles_Triangle::get_angle() {
	std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
}

Isosceles_Triangle::Isosceles_Triangle() {
	sides_count = 3;
	side_a = side_b = 20;
	side_c = 10;
	ang_Y = ang_Z = 50;
	ang_X = 80;
}
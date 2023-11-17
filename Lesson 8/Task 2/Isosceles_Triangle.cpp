#include "figure.hpp"
#include "triangle.hpp"
#include "exceptions.hpp"
#include "Isosceles_Triangle.hpp"
#include <iostream>


Isosceles_Triangle::Isosceles_Triangle() {
	sides_count = 3;
	side_a = side_b = 20;
	side_c = 10;
	ang_Y = ang_Z = 50;
	ang_X = 80;
}


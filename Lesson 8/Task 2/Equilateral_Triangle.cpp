#include "figure.hpp"
#include "triangle.hpp"
#include "Equilateral_Triangle.hpp"
#include "exceptions.hpp"
#include <iostream>


Equilateral_Triangle::Equilateral_Triangle() {
	sides_count = 3;
	side_a = side_b = side_c = 35;
	ang_X = ang_Y = ang_Z = 60;
}
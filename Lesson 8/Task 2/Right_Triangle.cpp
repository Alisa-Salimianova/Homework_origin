#include "figure.hpp"
#include "triangle.hpp"
#include "Right_Triangle.hpp"
#include "exceptions.hpp"
#include <iostream>




Right_Triangle::Right_Triangle() {
	sides_count = 3;
	side_a = 30;
	side_b = 40;
	side_c = 60;

	ang_X = 90;
	ang_Y = 30;
	ang_Z = 60;
}
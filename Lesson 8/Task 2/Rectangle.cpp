#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"
#include "exceptions.hpp"
#include <iostream>


Rectangle::Rectangle() {
	sides_count = 4;
	side_a = side_b = 40;
	side_c = side_d = 30;

	ang_W = ang_X = ang_Y = ang_Z = 90;
}
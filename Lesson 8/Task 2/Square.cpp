#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "exceptions.hpp"
#include <iostream>



Square::Square() {
	sides_count = 4;
	side_a = side_b = side_c = side_d = 25;

	ang_W = ang_X = ang_Y = ang_Z = 90;
}
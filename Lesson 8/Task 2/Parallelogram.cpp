#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"
#include "exceptions.hpp"
#include <iostream>


Parallelogram::Parallelogram() {
	sides_count = 4;
	side_a = side_b = 50;
	side_c = side_d = 35;

	ang_W = ang_X = 70;
	ang_Y = ang_Z = 110;
}
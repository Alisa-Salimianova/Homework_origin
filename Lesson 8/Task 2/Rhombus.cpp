#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"
#include "Rhombus.hpp"
#include "exceptions.hpp"
#include <iostream>


Rhombus::Rhombus() {
	side_a = side_b = side_c = side_d = 17;

	ang_W = ang_X = 80;
	ang_Y = ang_Z = 100;
}
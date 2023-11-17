#pragma once
#include "figure.hpp"


class Quadrilateral : public Figure {
public:

	int sides_count, side_a, side_b, side_c, side_d;

	double ang_W, ang_X, ang_Y, ang_Z;

	void get_sides();
	void get_angle();

	Quadrilateral();
};
#pragma once
#include "figure.hpp"


class Triangle : public Figure {
public:
	int sides_count, side_a, side_b, side_c;

	double ang_X, ang_Y, ang_Z;

	void get_name();
	void get_sides();
	void get_angle();

	Triangle();
};
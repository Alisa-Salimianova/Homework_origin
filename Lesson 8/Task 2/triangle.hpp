#pragma once
#include "figure.hpp"
#include "exceptions.hpp"


class Triangle : public Figure {
public:
	int sides_count, side_a, side_b, side_c;

	double ang_X, ang_Y, ang_Z;

	void get_sides();
	void get_angle();
	void param();

	Triangle();
};
#pragma once
#include "figure.hpp"
#include "triangle.hpp"


class Right_Triangle : public Triangle {
public:
	int sides_count, side_a, side_b, side_c;

	double ang_X, ang_Y, ang_Z;

	void get_name();
	void get_sides();
	void get_angle();

	Right_Triangle();
};
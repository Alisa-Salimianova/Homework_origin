#pragma once
#include "figure.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"



class Square : public Rectangle {
public:
	int sides_count, side_a, side_b, side_c, side_d;

	double ang_W, ang_X, ang_Y, ang_Z;

	void get_name();
	void get_sides();
	void get_angle();

	Square();
};
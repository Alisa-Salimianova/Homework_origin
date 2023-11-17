#include <iostream>
#include <cstring>
#include "figure.hpp"
#include "triangle.hpp"
#include "Isosceles_Triangle.hpp"
#include "Equilateral_Triangle.hpp"
#include "Right_Triangle.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Parallelogram.hpp"
#include "Rhombus.hpp"
#include "exceptions.hpp"

#include <iostream>



int main() {
	Triangle tri;
	tri.name = "Треугольник: ";
	tri.get_name();
	tri.get_sides();
	tri.get_angle();
	tri.param();

	Isosceles_Triangle isos;
	isos.name = "Равнобедренный треугольник: ";
	isos.get_name();
	isos.get_sides();
	isos.get_angle();

	Equilateral_Triangle equi;
	equi.name = "Равносторонний треугольник: ";
	equi.get_name();
	equi.get_sides();
	equi.get_angle();

	Right_Triangle right;
	right.name = "Прямоугольный треугольник: ";
	right.get_name();
	right.get_sides();
	right.get_angle();

	Quadrilateral quad;
	quad.name = "Четырехугольник: ";
	quad.get_name();
	quad.get_sides();
	quad.get_angle();

	Rectangle rect;
	rect.name = "Прямоугольник: ";
	rect.get_name();
	rect.get_sides();
	rect.get_angle();

	Square square;
	square.name = "Квадрат: ";
	square.get_name();
	square.get_sides();
	square.get_angle();

	Parallelogram paral;
	paral.name = "Параллелограм: ";
	paral.get_name();
	paral.get_sides();
	paral.get_angle();

	Rhombus diamond;
	diamond.name = "Ромб: ";
	diamond.get_name();
	diamond.get_sides();
	diamond.get_angle();

	return 0;

}
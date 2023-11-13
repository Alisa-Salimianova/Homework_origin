#include <iostream>
#include <cstring>


class Figure {
public:
	int sides_count;
	std::string name;

	void get_name() {
		std::cout << name << std::endl;
	}
};


class Triangle : public Figure {
public:
	int sides_count = 3;
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;

	double ang_X = 80;
	double ang_Y = 40;
	double ang_Z = 60;

	void get_sides() {
		std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
	}

	void get_angle() {
		std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
	}

	Triangle() {

	}
};

class Isosceles_Triangle : public Triangle {
public:
	Isosceles_Triangle() {
		side_a = side_b = 20;
		side_c = 10;
		ang_Y = ang_Z = 50;
		ang_X = 80;
	}
};

class Equilateral_Triangle : public Triangle {
public:
	Equilateral_Triangle() {
		side_a = side_b = side_c = 35;
		ang_X = ang_Y = ang_Z = 60;
	}
};

class Right_Triangle : public Triangle {
public:
	Right_Triangle() {
		side_a = 30;
		side_b = 40;
		side_c = 60;

		ang_X = 90;
		ang_Y = 30;
		ang_Z = 60;

	}
};

class Quadrilateral : public Figure {
public:

	int sides_count = 4;
	int side_a = 11;
	int side_b = 12;
	int side_c = 25;
	int side_d = 64;

	double ang_W = 60;
	double ang_X = 70;
	double ang_Y = 55;
	double ang_Z = 75;

	void get_sides() {
		std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
	}

	void get_angle() {
		std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
	}

	Quadrilateral() {
	}
};

class Rectangle : public Quadrilateral {
public:
	Rectangle() {
		side_a = side_b = 40;
		side_c = side_d = 30;

		ang_W = ang_X = ang_Y = ang_Z = 90;
	}
};

class Square : public Rectangle {
public:
	Square() {
		side_a = side_b = side_c = side_d = 25;

		ang_W = ang_X = ang_Y = ang_Z = 90;
	}
};

class Parallelogram : public Quadrilateral {
public:
	Parallelogram() {
		side_a = side_b = 50;
		side_c = side_d = 35;

		ang_W = ang_X = 70;
		ang_Y = ang_Z = 110;
	}
};

class Rhombus : public Parallelogram {
public:
	Rhombus() {
		side_a = side_b = side_c = side_d = 17;

		ang_W = ang_X = 80;
		ang_Y = ang_Z = 100;
	}
};

int main() {
	Triangle tri;
	tri.name = "Треугольник: ";
	tri.get_name();
	tri.get_sides();
	tri.get_angle();

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
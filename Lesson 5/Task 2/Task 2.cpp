#include <iostream>
#include <cstring>

class Figure {
public:
	int sides_count;
	std::string name;

	void get_name() {
		std::cout << name << std::endl;
	}

	virtual void get_sides() {}
	virtual void get_angle() {}
	void print_info() {
		get_sides();
		get_angle();
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

	void get_sides() override {
		std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
	}

	void get_angle() override {
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

	void get_sides() override {
		std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
	}

	void get_angle() override {
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
	tri.print_info();

	Isosceles_Triangle isos;
	isos.name = "Равнобедренный треугольник: ";
	isos.get_name();
	isos.print_info();

	Equilateral_Triangle equi;
	equi.name = "Равносторонний треугольник: ";
	equi.get_name();
	equi.print_info();

	Right_Triangle right;
	right.name = "Прямоугольный треугольник: ";
	right.get_name();
	right.print_info();

	Quadrilateral quad;
	quad.name = "Четырехугольник: ";
	quad.get_name();
	quad.print_info();

	Rectangle rect;
	rect.name = "Прямоугольник: ";
	rect.get_name();
	rect.print_info();

	Square square;
	square.name = "Квадрат: ";
	square.get_name();
	square.print_info();

	Parallelogram paral;
	paral.name = "Параллелограм: ";
	paral.get_name();
	paral.print_info();

	Rhombus diamond;
	diamond.name = "Ромб: ";
	diamond.get_name();
	diamond.print_info();

	return 0;

}
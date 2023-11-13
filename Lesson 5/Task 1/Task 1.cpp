#include <iostream>
#include <string>


class Figure {
public:
	int sides_count;
	std::string name;

	void get_name() {
		std::cout << name;
	}

	void get_sides_count() {
		std::cout << sides_count << std::endl;
	}
};


class Triangle : public Figure {
public:
	Triangle() {
	}
};

class Quadrilateral : public Figure {
public:
	Quadrilateral() {
	}
};


int main() {
	std::cout << "Количество сторон: " << std::endl;

	Figure f;
	f.sides_count = 0;
	f.name = "Фигура: ";
	f.get_name();
	f.get_sides_count();

	Triangle t;
	t.sides_count = 3;
	t.name = "Треугольник: ";
	t.get_name();
	t.get_sides_count();

	Quadrilateral q;
	q.sides_count = 4;
	q.name = "Четырёхугольник: ";
	q.get_name();
	q.get_sides_count();
}
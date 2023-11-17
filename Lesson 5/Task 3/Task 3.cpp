#include <iostream>
#include <cstring>


class Figure {
public:
    int sides_count;
    std::string name;
    int ang_sum;

    void get_name() {
        std::cout << name << std::endl;
    }

    void get_sides_count() {
        std::cout << "Количество сторон: " << sides_count << std::endl;
    }
    virtual void get_sides() {};
    virtual void get_angle() {};
    void print_info() {
        get_sides();
        get_angle();
    }

    virtual bool check() {
        if (ang_sum == 180) {
            std::cout << "Фигура правильная" << std::endl;
            return true;
        }
        else {
            std::cout << "Фигура неправильная" << std::endl;
            return false;
        }
    }
};


class Triangle : public Figure {
public:

    int side_a = 10;
    int side_b = 20;
    int side_c = 30;

    double ang_X = 80;
    double ang_Y = 40;
    double ang_Z = 60;

    int ang_sum = ang_X + ang_Y + ang_Z;


    void get_sides() override {
        std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << std::endl;
    }

    void get_angle() override {
        std::cout << "Углы: " << "X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
    }

    bool check() override {
        if (ang_sum == 180) {
            std::cout << "Фигура правильная" << std::endl;
            return true;
        }
        else {
            std::cout << "Фигура неправильная" << std::endl;
            return false;
        }
    }


    Triangle() {
        sides_count = 3;
    }
};

class Isosceles_Triangle : public Triangle {
public:
    Isosceles_Triangle() {
        side_a = side_b = 20;
        side_c = 10;
        ang_Y = ang_Z = 50;
        ang_X = 120;
        ang_sum = ang_X + ang_Y + ang_Z;
    }
};

class Equilateral_Triangle : public Triangle {
public:
    Equilateral_Triangle() {
        side_a = side_b = side_c = 35;
        ang_X = ang_Y = ang_Z = 60;
        ang_sum = ang_X + ang_Y + ang_Z;
    }
};

class Right_Triangle : public Triangle {
public:
    Right_Triangle() {
        side_a = 30;
        side_b = 40;
        side_c = 60;

        ang_X = 90;
        ang_Y = 60;
        ang_Z = 60;

        ang_sum = ang_X + ang_Y + ang_Z;
    }
};

class Quadrilateral : public Figure {
public:

    int side_a = 11;
    int side_b = 12;
    int side_c = 25;
    int side_d = 64;

    double ang_W = 60;
    double ang_X = 70;
    double ang_Y = 55;
    double ang_Z = 75;
    int ang_sum = ang_W + ang_X + ang_Y + ang_Z;

    void get_sides() override {
        std::cout << "Стороны: " << "A = " << side_a << " B = " << side_b << " C = " << side_c << " D = " << side_d << std::endl;
    }

    void get_angle() override {
        std::cout << "Углы: " << "W = " << ang_W << " X = " << ang_X << " Y = " << ang_Y << " Z = " << ang_Z << std::endl << std::endl;
    }
    bool check() override {
        if (ang_sum == 360) {
            std::cout << "Фигура правильная" << std::endl;
            return true;
        }
        else {
            std::cout << "Фигура неправильная" << std::endl;
            return false;
        }
    }

    Quadrilateral() {
        sides_count = 4;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle() {
        side_a = side_b = 40;
        side_c = side_d = 30;

        ang_W = ang_X = ang_Y = ang_Z = 90;

        ang_sum = ang_W + ang_X + ang_Y + ang_Z;
    }
};

class Square : public Rectangle {
public:
    Square() {
        side_a = side_b = side_c = side_d = 25;

        ang_W = ang_X = ang_Y = ang_Z = 90;

        ang_sum = ang_W + ang_X + ang_Y + ang_Z;
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram() {
        side_a = side_b = 50;
        side_c = side_d = 35;

        ang_W = ang_X = 70;
        ang_Y = ang_Z = 210;

        ang_sum = ang_W + ang_X + ang_Y + ang_Z;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus() {
        side_a = side_b = side_c = side_d = 17;

        ang_W = ang_X = 80;
        ang_Y = ang_Z = 100;

        ang_sum = ang_W + ang_X + ang_Y + ang_Z;
    }
};

int main() {
    Triangle tri;
    tri.name = "Треугольник: ";
    tri.get_name();
    tri.check();
    tri.get_sides_count();
    tri.print_info();

    Isosceles_Triangle isos;
    isos.name = "Равнобедренный треугольник: ";
    isos.get_name();
    Triangle* par_isos = &isos;
    par_isos->check();
    isos.get_sides_count();
    isos.print_info();


    Equilateral_Triangle equi;
    equi.name = "Равносторонний треугольник: ";
    equi.get_name();
    Triangle* par_equi = &equi;
    par_equi->check();
    equi.get_sides_count();
    equi.print_info();

    Right_Triangle right;
    right.name = "Прямоугольный треугольник: ";
    right.get_name();
    Triangle* par_right = &right;
    par_right->check();
    right.get_sides_count();
    right.print_info();

    Quadrilateral quad;
    quad.name = "Четырехугольник: ";
    quad.get_name();
    quad.check();
    quad.get_sides_count();
    quad.print_info();

    Rectangle rect;
    rect.name = "Прямоугольник: ";
    rect.get_name();
    Quadrilateral* par_rect = &rect;
    par_rect->check();
    rect.get_sides_count();
    rect.print_info();

    Square square;
    square.name = "Квадрат: ";
    square.get_name();
    Quadrilateral* par_square = &square;
    par_square->check();
    square.get_sides_count();
    square.print_info();

    Parallelogram paral;
    paral.name = "Параллелограм: ";
    paral.get_name();
    Quadrilateral* par_paral = &paral;
    par_paral->check();
    paral.get_sides_count();
    paral.print_info();

    Rhombus diamond;
    diamond.name = "Ромб: ";
    diamond.get_name();
    Quadrilateral* par_diamond = &diamond;
    par_diamond->check();
    diamond.get_sides_count();
    diamond.print_info();

    return 0;

}
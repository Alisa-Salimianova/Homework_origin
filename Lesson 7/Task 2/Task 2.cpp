#include <iostream>

#define SUB(x, y) ((x) - (y))
#define EQUAS_1(x,y,z) (((x)-(y))*(z))
#define EQUAS_2(x,y,z) (((x)-((y)+(z)))* (z))

int main(int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << EQUAS_1(a, b, c) << std::endl;
	std::cout << EQUAS_2(a, b, c) << std::endl;
}
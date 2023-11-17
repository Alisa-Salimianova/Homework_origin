#pragma once
#include <iostream>
#include <stdexcept>


class exceptions : public std::domain_error {
public:
	int sides_count;
	double ang_X, ang_Y, ang_Z;

	exceptions();
	exceptions(const std::string& msg) : std::domain_error(msg) {}
};
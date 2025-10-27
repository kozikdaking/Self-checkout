#pragma once
#include<string>
#include<vector>

class Products
{
public:
	Products(int code, std::string name, double price);

	int code;
	std::string name;
	double price;
};


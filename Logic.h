#pragma once
#include<iostream>
#include <vector>
#include"Products.h"
#include"Algorithm.h"

class Logic
{
public:
	void showText();
	void choice(std::vector<Products>& products);
private:
	int choose;
};


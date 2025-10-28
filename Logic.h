#pragma once
#include<iostream>
#include <vector>
#include<string>
#include<cstdlib>
#include"Products.h"
#include"Algorithm.h"

class Logic
{
public:
	void showText();
	void insertCode(std::vector<Products>& products);
	void choice();
private:
	Algorithm algorithm;
	int choose;
	int code;
	std::string exit;
};


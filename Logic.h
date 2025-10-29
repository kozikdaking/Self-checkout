#pragma once
#include<iostream>
#include <vector>
#include<string>
#include<cstdlib>
#include"Algorithm.h"

class Logic
{
public:
	void showText();
	void insertCode(std::vector<Products>& products);
	void insertName(std::vector<Products>& products);
	void choice(std::vector<Products>& products);
	void list(std::vector<Products>& products);
	void sum(std::vector<Products>& products);
	void showCart(std::vector<Products>& products);
private:
	Algorithm algorithm;
	int choose;
	int code;
	std::string exit;
	std::string name;
	std::vector<Products>selectedProducts;
	float total = 0.0;
};


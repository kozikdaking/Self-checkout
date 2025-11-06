#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <filesystem>
#include <sstream>
#include "Algorithm.h"

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
	void receiptToTxt();
private:
	Algorithm algorithm;
	int receiptNumber = 1;
	int choose;
	int code;
	float total = 0.0;
	std::string exit;
	std::string name;
	std::string line;
	std::vector<Products>selectedProducts;
};

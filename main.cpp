#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include<algorithm>
#include "Products.h"
#include "Algorithm.h"
#include "Logic.h"
int main()
{
	std::vector<Products> products;
	Logic logic;
	Algorithm algorithm;
	logic.choice();
	products.emplace_back(1001, "chleb", 5.40);
	products.emplace_back(1002, "maslo", 5.10);
	products.emplace_back(99, "Cola",8.30);
	algorithm.bubbleSort(products);
	
	logic.showText();
	logic.insertCode(products);

};

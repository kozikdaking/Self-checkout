#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include "Products.h"
#include "Algorithm.h"
#include "Logic.h"
int main()
{
	std::vector<Products> products;
	Logic logic;
	Algorithm algorithm;

	products.emplace_back(1001, "Chleb", 5.40);
	products.emplace_back(1002, "Maslo", 5.10);
	products.emplace_back(1003, "Cola",8.30);

	logic.choice(products);
	

};

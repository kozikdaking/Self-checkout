#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Products.h"
#include "Algorithm.h"
#include "Logic.h"
#include<algorithm>
int main()
{
	std::vector<Products> products;
	Logic logic;
	Algorithm algorithm;
	logic.showText();
	logic.choice(products);


};

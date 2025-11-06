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
	Logic logic;
	Algorithm algorithm;
	std::vector<Products> products;

	products.emplace_back(1001, "Chleb", 5.40);
	products.emplace_back(1002, "Maslo", 5.10);
	products.emplace_back(1003, "Cola", 8.30);
	products.emplace_back(1004, "Mleko", 3.20);
	products.emplace_back(1005, "Ser Zolty", 9.80);
	products.emplace_back(1006, "Jajka", 7.50);
	products.emplace_back(1007, "Szynka", 11.40);
	products.emplace_back(1008, "Cukier", 4.70);
	products.emplace_back(1009, "Maka", 3.90);
	products.emplace_back(1010, "Ryz", 6.30);
	products.emplace_back(1011, "Makaron", 4.80);
	products.emplace_back(1012, "Kawa", 18.50);
	products.emplace_back(1013, "Herbata", 12.20);
	products.emplace_back(1014, "Sok Pomaranczowy", 7.90);
	products.emplace_back(1015, "Woda Mineralna", 2.40);
	products.emplace_back(1016, "Jogurt", 3.70);
	products.emplace_back(1017, "Czekolada", 6.90);
	products.emplace_back(1018, "Ciastka", 8.10);
	products.emplace_back(1019, "Keczup", 5.60);
	products.emplace_back(1020, "Musztarda", 4.30);
	products.emplace_back(1021, "Olej", 9.50);
	products.emplace_back(1022, "Maslo Orzechowe", 13.40);
	products.emplace_back(1023, "Dzem", 7.80);
	products.emplace_back(1024, "Zupa Instant", 3.10);
	products.emplace_back(1025, "Tunczyk w puszce", 8.70);
	products.emplace_back(1026, "Piers z Kurczaka", 18.90);
	products.emplace_back(1027, "Wolowina", 29.50);
	products.emplace_back(1028, "Ziemniaki", 2.90);
	products.emplace_back(1029, "Pomidory", 6.40);
	products.emplace_back(1030, "Banany", 5.20);

	logic.choice(products);
};
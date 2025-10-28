#include "Logic.h"

void Logic::showText()
{
	std::cout << "=== KASA SAMOOBSLUGOWA ===" << std::endl;
	std::cout << " " << std::endl;	
}

void Logic::insertCode(std::vector<Products>&products)
{
	while(true)
	{ 
		std::cout << "Insert code numer: ";
	std::cin >> code;

	int index = algorithm.binarySearchByCode(products, code);

	if (index == -1)
	{ 
		std::cout << "not found, insert code again" << std::endl;
		std::cin >> code;
	}
	else
	{ 
		std::cout << "Product: " << products[index].name <<"          Price: " <<products[index].price<<std::endl;
	}
	}
}

void Logic::choice()
{
	//do
//	{
		switch (choose)
		{
		case 1:
		{
			std::cout << "Type code." << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "found by name." << std::endl;
			break;
		}
		case 3:
		{

		}
		case 4:
		{

		}
		case 5:
		{
			std::cout << "exit" << std::endl;
			break;
		}
		
		}
//	} //while (choose != 5);
}
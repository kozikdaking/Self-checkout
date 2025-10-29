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

	if (code == 0) // return to menu
	{
		break;
	}

	int index = algorithm.binarySearchByCode(products, code);

	if (index == -1)
	{ 
		std::cout << "not found, insert code again" << std::endl;
		
	}
	
	else
	{ 
		std::cout << "Product: " << products[index].name <<" | Price: " <<products[index].price<<std::endl;
		selectedProducts.push_back(products[index]);
			
	}
	}
}

void Logic::insertName(std::vector<Products>& products)
{
	while (true)
	{

		std::cout << "Insert name: ";
		std::cin >> name;

		if (code == 0) // return to menu
		{
			break;
		}

		int index = algorithm.binarySearchByName(products, name);

		if (index == -1)
		{
			std::cout << "not found, insert code again" << std::endl;
		}
		else
		{
			std::cout << "Product: " << products[index].name << "          Price: " << products[index].price << std::endl;
			selectedProducts.push_back(products[index]);	
		}
	}	
}

void Logic::list(std::vector<Products>& products)
{
	while (true)
	{
		if (code == 0) // return to menu
		{
			break;
		}
	}

	for (const Products& p : products)
	{
		std::cout << "Code: "<<p.code << " | Name: " << p.name << " | Price: " << p.price <<std::endl;
	}
}

void Logic::sum(std::vector<Products>& products)
{
	for (const auto &p:selectedProducts)
	{
		total += p.price;
		
	}
}

void Logic::showCart(std::vector<Products>& products)
{
	std::cout << "Your cart: " << std::endl;
	std::cout << " " << std::endl;
	for (const Products& p : selectedProducts)
	{
		std::cout << p.name << " " << p.price << std::endl;
	}
}

void Logic::choice(std::vector<Products>& products)
{
	do
	{
	std::cout << "1.Insert code." << std::endl;
	std::cout << "2.Insert name." << std::endl;
	std::cout << "3.List of the products." << std::endl;
	std::cout << "4.Exit." << std::endl;
	std::cin >> choose;
	
		switch (choose)
		{
		case 1:
		{
			insertCode(products);
			algorithm.bubbleSort(products);
			break;
		}
		case 2:
		{
			insertName(products);
			algorithm.bubbleSort(products);
			break;
		}
		case 3:
		{
			list(products);
			break;
		}
		case 4:
		{
			std::cout << "exit" << std::endl;
			std::cout << " " << std::endl;
			sum(products);
			showCart(products);
			std::cout << "==============================" << std::endl;
			std::cout << "BILL: " << total << " PLN" << std::endl;
			std::cout << "==============================" << std::endl;
			break;
		}
		case 5:
		{

		}

		}
} while (choose != 4);
}
	


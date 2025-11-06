#include "Logic.h"

void Logic::showText()
{
	std::cout << "=== KASA SAMOOBSLUGOWA ===" << std::endl;
	std::cout << " " << std::endl;
}

void Logic::receiptToTxt()
{
	std::string fileName;
	namespace fs=std::filesystem;
	do
	{ 
		std::ostringstream oss;
		oss << "C:\\Users\\milaw\\OneDrive\\Desktop\\receipt_" //path
			<< std::setw(3) << std::setfill('0') << receiptNumber << ".txt";
		fileName = oss.str();
		receiptNumber++;

	} while (fs::exists(fileName));

	std::ofstream file(fileName);
	if (!file.is_open())
	{
		std::cout << "Error, could not create the receipt file!" << std::endl;
		return;
	}

	char buffer[80];
	std::time_t now = std::time(nullptr);
	std::tm timeinfo;
	localtime_s(&timeinfo, &now);
	std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);

	file << "==============================" << std::endl;
	file << "        FISCAL RECEIPT       "<< std::endl;
	file << "==============================" << std::endl;
	file << " " << std::endl;
	file << "Date: " << buffer << std::endl;
	file << "Receipt number: " << receiptNumber -1<< std::endl;
	file << " " << std::endl;
	file << "==============================" << std::endl;
	file << " " << std::endl;

	if (selectedProducts.empty())
	{
		file << "Brak produktow w koszyku" << std::endl;
	}
	else
	{
		for (const auto& p : selectedProducts)
		{
			file << p.name << " - " << p.price << " PLN" << std::endl;

		}
	}

	file << " " << std::endl;
	file << "==============================" << std::endl;
	file << "SUMA DO ZAP£ATY: " << total << " PLN" << std::endl;
	file << "==============================" << std::endl;

	file.close();
}

void Logic::insertCode(std::vector<Products>& products)
{
	while (true)
	{
		std::cout << "Insert code numer: ";
		if (!(std::cin >> code))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Wrong type of input. Try again using numbers." << std::endl;
			continue;
		}

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
			std::cout << "Product: " << products[index].name << " | Price: " << products[index].price << std::endl;
			selectedProducts.push_back(products[index]);

		}
	}
}

void Logic::insertName(std::vector<Products>& products)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore cin before choice
	while (true)
	{

		std::cout << "Insert name: ";
		std::getline(std::cin, line);

		if (line == "0") // return to menu
		{
			break;
		}

		int index = algorithm.binarySearchByName(products, line);

		if (index == -1)
		{
			std::cout << "not found, insert name again" << std::endl;
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
		std::cout << "Code: " << p.code << " | Name: " << p.name << " | Price: " << p.price <<std::endl;
	}
}

void Logic::sum(std::vector<Products>& products)
{
	for (const auto& p : selectedProducts)
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
		std::cout << p.name << " " << p.price << " PLN" << std::endl;
	}
}

void Logic::choice(std::vector<Products>& products)
{
	do
	{
		std::cout << "0.Main menu." << std::endl;
		std::cout << "1.Insert code." << std::endl;
		std::cout << "2.Insert name." << std::endl;
		std::cout << "3.List of the products." << std::endl;
		std::cout << "4.Exit." << std::endl;
		std::cout << " " << std::endl;
		if (!(std::cin >> choose))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Wrong type of input. Try again using numbers." << std::endl;
			continue;
		}

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
			system("cls");
			sum(products);
			showCart(products);
			std::cout << " " << std::endl;
			std::cout << "==============================" << std::endl;
			std::cout << "BILL: " << total << " PLN" << std::endl;
			std::cout << "==============================" << std::endl;

			receiptToTxt();
			
			break;
		}

		}
	} while (choose != 4);
}


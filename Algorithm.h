#pragma once
#include "Products.h"
#include <vector>

class Algorithm
{
public:
    int binarySearchByCode(const std::vector<Products>& products, int targetCode);
    int binarySearchByName(const std::vector<Products>& products, std::string targetName);
    void bubbleSort(std::vector<Products>& products);
};

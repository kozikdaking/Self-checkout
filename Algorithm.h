#pragma once
#include "Products.h"
#include <vector>

class Algorithm
{
public:
    int binarySearchByCode(const std::vector<Products>& products, int targetCode);
    void bubbleSort(std::vector<Products>& products);
};


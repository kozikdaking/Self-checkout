#pragma once
#include "Algorithm.h"
#include "Products.h"
#include <vector>
#include <string>

class Algorithm
{
public:
    int binarySearchByCode(const std::vector<Products>& products, int targetCode);
    void bubbleSort(std::vector<Products>& products);
};


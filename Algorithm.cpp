#include "Algorithm.h"
#pragma once

int Algorithm::binarySearchByCode(const std::vector<Products>& products, int targetCode)
{
    int left = 0;
    int right = static_cast<int>(products.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (products[mid].code == targetCode) {
            return mid;
        }
        else if (products[mid].code > targetCode) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}

void Algorithm::bubbleSort(std::vector<Products>& products)
{
    int n = products.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (products[j].code > products[j + 1].code)
            {
                std::swap(products[j], products[j + 1]);
            }
        }
    }
}



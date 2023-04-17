/*
md-shekh.sadi@alten.com
Exercise: 2.3
*/

#include "count.h"
#include <iostream>

void multiplicationTable(int startingNumber, int endingNumber)
{
    for (int i = startingNumber; i <= endingNumber; ++i)
    {
        for (int j = startingNumber; j <= endingNumber; ++j)
        {
            std::cout << i * j << '\t';
        }
        std::cout << '\n';
    }
}
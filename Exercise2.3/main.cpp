/*
md-shekh.sadi@alten.com
Exercise: 2.3
*/

#include "count.h"
#include <iostream>

int main()
{
    int startingNumber{1};
    int endingNumber{10};

    multiplicationTable(startingNumber, endingNumber);

    std::cout << '\n';

    return 0;
}
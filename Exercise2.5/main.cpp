#include "temperatureConversion.h"
#include <iostream>

int main()
{
    float temperature{100};

    std::cout << "$ ./t_convert\n";
    std::cout << "Usage: ./t_convert [value in °F]\n\n";

    std::cout << "$ ./t_convet " << temperature << "\n\n";

    std::cout << tempCon(temperature) << " °C\n\n";

    return 0;
}

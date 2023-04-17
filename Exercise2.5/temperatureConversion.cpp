#include "temperatureConversion.h"

float tempCon(float temperature)
{
    double temp{};
    double ctemp{};
    constexpr double fahrenheitOffset{32};
    constexpr double fahrenheitToCelsiousRatio{5.0 / 9.0};

    ctemp = ((temperature - fahrenheitOffset) * fahrenheitToCelsiousRatio);
    return ctemp;
}

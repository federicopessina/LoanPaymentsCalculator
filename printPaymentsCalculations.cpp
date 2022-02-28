#include <iostream>
#include <iomanip>

#include "printPaymentsCalculations.h"

void printPaymentsCalculations(double payment)
{
    std::cout << "Payment: " << std::setiosflags(std::ios::fixed)
        << std::setprecision(2) << payment << std::endl;
}
#include "printAmortizationHeader.h"

#include <iostream>
#include <iomanip>

#include "amortizationEnumeration.h"

std::string AmortizationHeader[] =
{
    "Yr",
    "Mn",
    "CumMn",
    "Payment",
    "Interest",
    "Principal",
    "Balance"
};

void printAmortizationHeader()
{
    std::cout <<
        std::endl <<
        std::setw(YR_OUT) << AmortizationHeader[0] << " " <<
        std::setw(MN_OUT) << AmortizationHeader[1] << " " <<
        std::setw(CUM_MN_OUT) << AmortizationHeader[2] << " " <<
        std::setw(PAYMENT_OUT) << AmortizationHeader[3] << " " <<
        std::setw(INTEREST_OUT) << AmortizationHeader[4] << " " <<
        std::setw(PRINCIPAL_OUT) << AmortizationHeader[5] << " " <<
        std::setw(BALANCE_OUT) << AmortizationHeader[6] << " " << std::endl;
};
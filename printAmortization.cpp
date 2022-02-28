#include <iostream>
#include <iomanip>

#include "printAmortization.h"
#include "amortizationEnumeration.h"

void printAmortization(gAmorizeMonth& amortMonth)
{
    // print one line of the amortization for one month
    std::cout << std::setw(YR_OUT) << amortMonth.year << " " <<
        std::setw(MN_OUT) << amortMonth.yearMonth << " " <<
        std::setw(CUM_MN_OUT) << amortMonth.loanMonth << " " <<
        std::setw(PAYMENT_OUT) << amortMonth.payment << " " <<
        std::setw(INTEREST_OUT) << amortMonth.pureInterest << " " <<
        std::setw(PRINCIPAL_OUT) << amortMonth.paidDownPrincipal << " " <<
        std::setw(BALANCE_OUT) << amortMonth.principalBalance << std::endl;
}
#include <iostream>

#include "printInputLoanVariables.h"

void printInputLoanVariables(double principal, double userInterest, int yearsOfLoan)
{
    // print input variables in mathematical terms
    std::cout << std::endl;
    std::cout << "Loan Principal: " << principal << std::endl;
    std::cout << "Interest Rate: " << userInterest << "%" << std::endl;
    std::cout << "Time Period: " << yearsOfLoan << " year(s)" << std::endl;
}
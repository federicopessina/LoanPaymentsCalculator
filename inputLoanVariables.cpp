#include <iostream>

#include "inputLoanVariables.h"
#include "amortizeProgram.h"

void inputLoanVariables(int argc, double& principal, double& humanInterest, int& yearsOfLoan, char* argv[])
{
    // input variables
    if (argc == 1)
    {
        std::cout << "Enter the principal amount: ";
        std::cin >> principal;

        std::cout << "Enter the interest rate: ";
        std::cin >> humanInterest;

        std::cout << "Enter the years of loan: ";
        std::cin >> yearsOfLoan;
    }
    else
    {
        // automate input phase
        principal = atof(argv[LOAN_PRINCIPAL]);
        humanInterest = atof(argv[INTEREST_RATE]);
        yearsOfLoan = atoi(argv[YEARS_OF_LOAN]);
    }
}
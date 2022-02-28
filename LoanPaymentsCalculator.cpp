// BondPricer.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING  1 // silence compiler warning caused by google test

#include <gtest/gtest.h>

#include "divisor.h"
#include "multiplier.h"
#include "globals.h"
#include "printWelcomeConsole.h"
#include "amortizeProgram.h"
#include "amortizationEnumeration.h"
#include "printAmortizationHeader.h"
#include "LoanPaymentsCalculator.h"
#include "inputLoanVariables.h"
#include "printPaymentsCalculations.h"
#include "printInputLoanVariables.h"
#include "printCompletedProcessConsole.h"
#include "printAmortization.h"
#include "updateLoanVariables.h"
#include "calculatePaymentsNumber.h"

int main(int argc, char* argv[])
{
    printWelcomeConsole();

    inputLoanVariables(argc, principal, userInterest, yearsOfLoan, argv);

    printInputLoanVariables(principal, userInterest, yearsOfLoan);

    // calculate loan variables
    double interest = divisor(userInterest, gPercentDenominator);
    double monthInterst = divisor(interest, gMonthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, gMonthsInYear);

    payment = calculatePaymentsNumber(principal, monthInterst, monthsOfLoan);

    printPaymentsCalculations(payment);

    currBalance = principal;

    while (currentLoanMonth <= monthsOfLoan)
    {
        // make monthly calculation of loan

        if (switchYear != year)
        {
            // divide output by year graphically
            switchYear = year;
            printAmortizationHeader();
        }

        gAmorizeMonth amortMonth;

        updateLoanVariables(currInterestPayment, currBalance, monthInterst, currPrincipalPayment, payment);
        
        amortMonth.year = year;
        amortMonth.yearMonth = yearMonth;
        amortMonth.loanMonth = currentLoanMonth;
        amortMonth.payment = payment;
        amortMonth.pureInterest = currInterestPayment;
        amortMonth.paidDownPrincipal = currPrincipalPayment;
        amortMonth.principalBalance = currBalance;

        printAmortization(amortMonth);

        yearMonth++;
        if (yearMonth > gMonthsInYear) // check if year is finished
        {
            yearMonth = 1;
            year++;
        }
        currentLoanMonth++;
    }

    printCompletedProcessConsole();

    return 0; // end program
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
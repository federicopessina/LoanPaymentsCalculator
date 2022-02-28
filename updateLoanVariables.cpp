#include <cmath>

#include "updateLoanVariables.h"

void updateLoanVariables(double& currInterestPayment, double& currBalance, double monthInterst, double& currPrincipalPayment, double payment)
{
    currInterestPayment = currBalance * monthInterst;
    currPrincipalPayment = payment - currInterestPayment;
    currBalance = std::abs(currBalance - currPrincipalPayment);
}
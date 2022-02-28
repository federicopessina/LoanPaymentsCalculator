#include <iomanip>

#include "calculatePaymentsNumber.h"

double calculatePaymentsNumber(double principal, double monthInterst, long monthsOfLoan)
{
	double payment = principal *
        (monthInterst /
            (1 - (pow((double)1 + monthInterst,
                (double)-monthsOfLoan))));
	return payment;
}
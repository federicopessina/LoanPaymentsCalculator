#pragma once

const int gMonthsInYear = 12;
const int gPercentDenominator = 100;

struct gAmorizeMonth
{
	int year;
	int yearMonth;
	long loanMonth;
	double payment;
	double pureInterest;
	double paidDownPrincipal;
	double principalBalance;
};
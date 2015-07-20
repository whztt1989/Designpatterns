#include "ComputeTaxVisitor.h"
#include "Tax.h"

void CComputeTaxVisitor::visitBusinessTax(CTax* vTax)
{
	double TotalTax = vTax->getIncome() * 0.1;
	std::cout << "Business tax is " << TotalTax << std::endl;
}

void CComputeTaxVisitor::visitCharityTax(CTax* vTax)
{
	double TotalTax = vTax->getIncome() * 0.2;
	std::cout << "Charity tax is " << TotalTax << std::endl;
}

void CComputeTaxVisitor::visitIndividualTax(CTax* vTax)
{
	double TotalTax = vTax->getIncome() * 0.3;
	std::cout << "Individual tax is " << TotalTax << std::endl;
}

#include "CharityTax.h"

double CCharityTax::getIncome()
{
	return m_Income;
}

void CCharityTax::acceptVisitor(CVisitor* vVisitor)
{
	vVisitor->visitCharityTax(this);
}



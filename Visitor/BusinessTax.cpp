#include "BusinessTax.h"

double CBusinessTax::getIncome()
{
	return m_Income;
}

void CBusinessTax::acceptVisitor(CVisitor* vVisitor)
{
	vVisitor->visitBusinessTax(this);
}



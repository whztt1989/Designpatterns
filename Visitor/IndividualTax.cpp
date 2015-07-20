#include "IndividualTax.h"

double CIndividualTax::getIncome()
{
	return m_Income;
}

void CIndividualTax::acceptVisitor(CVisitor* vVisitor)
{
	vVisitor->visitIndividualTax(this);
}



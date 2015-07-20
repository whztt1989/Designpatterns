#include "BusinessTax.h"
#include "CharityTax.h"
#include "IndividualTax.h"
#include "Visitor.h"
#include "ComputeTaxVisitor.h"

int main()
{
	CTax* Tax1 = new CBusinessTax(15.15);
	CTax* Tax2 = new CCharityTax(16.15);
	CTax* Tax3= new CIndividualTax(17.15);
	CVisitor* Visitor = new CComputeTaxVisitor();
	
	Tax1->acceptVisitor(Visitor);
	Tax2->acceptVisitor(Visitor);
	Tax3->acceptVisitor(Visitor);

	Visitor->visitBusinessTax(Tax1);
	Visitor->visitCharityTax(Tax2);
	Visitor->visitIndividualTax(Tax3);
	return 1;
}
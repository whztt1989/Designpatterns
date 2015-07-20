#include "Visitor.h"

class CComputeTaxVisitor : public CVisitor
{
public:
	CComputeTaxVisitor(){}
	~CComputeTaxVisitor(){}

private:

public:
	void visitBusinessTax(CTax* vTax);
	void visitCharityTax(CTax* vTax);
	void visitIndividualTax(CTax* vTax);
};
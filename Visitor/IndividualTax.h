#include "Tax.h"

class CIndividualTax : public CTax
{
public:
	//CIndividualTax(){}
	CIndividualTax(double vIncome):CTax(vIncome){}
	~CIndividualTax(){}

private:

public:
	double getIncome();
	void acceptVisitor(CVisitor* vVisitor);
};


#include "Tax.h"

class CCharityTax : public CTax
{
public:
	//CCharityTax(){}
	CCharityTax(double vIncome):CTax(vIncome){}
	~CCharityTax(){}

private:

public:
	double getIncome();
	void acceptVisitor(CVisitor* vVisitor);
};


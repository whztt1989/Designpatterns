#include "Tax.h"

class CBusinessTax : public CTax
{
public:
	//CBusinessTax(){}
	CBusinessTax(double vIncome):CTax(vIncome){}
	~CBusinessTax(){}

private:

public:
	double getIncome();
	void acceptVisitor(CVisitor* vVisitor);
};


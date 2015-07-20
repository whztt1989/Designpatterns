#pragma once
#include "Visitor.h"
#include <iostream>

class CTax
{
public:
	CTax(double vIncome):m_Income(vIncome){}
	virtual ~CTax(){}

private:

protected:
	double m_Income;
public:
	virtual double getIncome() = 0;
	virtual void acceptVisitor(CVisitor* vVisitor) = 0;
};

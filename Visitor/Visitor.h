#pragma once

class CTax;

class CVisitor
{
public:
	CVisitor(){}
	virtual ~CVisitor(){}

private:

public:
	virtual void visitBusinessTax(CTax* vTax) = 0;
	virtual void visitCharityTax(CTax* vTax) = 0;
	virtual void visitIndividualTax(CTax* vTax) = 0;
};
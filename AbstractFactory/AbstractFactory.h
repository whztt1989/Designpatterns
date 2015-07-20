#pragma once
#include "ProductA.h"
#include "ProductB.h"

class CAbstractFactory
{
public:
	CAbstractFactory(){}
	virtual ~CAbstractFactory(){}

private:
	
public:
	virtual CProductA* createProductA() = 0;
	virtual CProductB* createProductB() = 0;
};


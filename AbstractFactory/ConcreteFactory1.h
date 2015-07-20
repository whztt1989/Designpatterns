#pragma once
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"
#include "AbstractFactory.h"

class CConcreteFactory1 : public CAbstractFactory
{
public:
	CConcreteFactory1(){}
	~CConcreteFactory1(){}

private:

public:
	CProductA* createProductA()
	{
		return new CConcreteProductA1();
	}

	CProductB* createProductB()
	{
		return new CConcreteProductB1();
	}
};

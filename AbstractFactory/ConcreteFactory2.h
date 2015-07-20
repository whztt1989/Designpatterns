#pragma once
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"
#include "AbstractFactory.h"

class CConcreteFactory2 : public CAbstractFactory
{
public:
	CConcreteFactory2(){}
	~CConcreteFactory2(){}

private:

public:
	CConcreteProductA2* createProductA()
	{
		return new CConcreteProductA2();
	}

	CConcreteProductB2* createProductB()
	{
		return new CConcreteProductB2();
	}
};

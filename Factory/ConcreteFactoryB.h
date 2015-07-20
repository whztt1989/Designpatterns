#pragma once
#include "AbstractFactory.h"
#include "Product.h"
#include "ProductB.h"

class CConcreateFactoryB : public CAbstractFactory
{
public:
	CConcreateFactoryB(){}
	~CConcreateFactoryB(){}

private:

public:
	virtual CProduct* createProduct()
	{
		return new CProductB();
	}
};
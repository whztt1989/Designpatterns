#pragma once
#include "AbstractFactory.h"
#include "Product.h"
#include "ProductA.h"

class CConcreateFactoryA : public CAbstractFactory
{
public:
	CConcreateFactoryA(){}
	~CConcreateFactoryA(){}

private:

public:
	virtual CProduct* createProduct()
	{
		return new CProductA();
	}
};

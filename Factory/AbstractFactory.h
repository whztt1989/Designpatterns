#pragma once

#include "Product.h"
class CAbstractFactory
{
public:
	CAbstractFactory(){}
	virtual ~CAbstractFactory(){}

private:

public:
	virtual CProduct* createProduct() = 0;
};


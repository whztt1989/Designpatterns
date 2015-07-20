#pragma once
#include "Product.h"

class CSimpleFactory
{
public:
	CSimpleFactory() {}
	~CSimpleFactory() {}

private:

public:
	CProduct* produce(char vProductID);
};

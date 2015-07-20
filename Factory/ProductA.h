#pragma once
#include "Product.h"

class CProductA : public CProduct
{
public:
	CProductA(){}
	~CProductA(){}

private:

public:
	virtual void Function()
	{
		std::cout << "ProductA function \n" << std::endl;
	}
};

#pragma once
#include "Product.h"

class CProductB : public CProduct
{
public:
	CProductB(){}
	~CProductB(){}

private:

public:
	virtual void Function()
	{
		std::cout << "ProductB function \n" << std::endl;
	}
};
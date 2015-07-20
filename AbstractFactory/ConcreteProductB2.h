#pragma once
#include "ProductB.h"

class CConcreteProductB2 : public CProductB
{
public:
	CConcreteProductB2(){}
	~CConcreteProductB2(){}

private:

public:
	void Funtion()
	{
		std::cout << "Concrete product B2 \n" << std::endl;
	}
};


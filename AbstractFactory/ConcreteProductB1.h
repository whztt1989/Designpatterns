#pragma once
#include "ProductB.h"

class CConcreteProductB1 : public CProductB
{
public:
	CConcreteProductB1(){}
	~CConcreteProductB1(){}

private:

public:
	void Funtion()
	{
		std::cout << "Concrete product B1 \n" << std::endl;
	}
};


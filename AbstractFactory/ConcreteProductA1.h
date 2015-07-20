#pragma once
#include "ProductA.h"

class CConcreteProductA1 : public CProductA
{
public:
	CConcreteProductA1(){}
	~CConcreteProductA1(){}

private:

public:
	void Function() override
	{
		std::cout << "Concrete product A1 \n" << std::endl;
	}
};


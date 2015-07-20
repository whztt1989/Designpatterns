#pragma once
#include "ProductA.h"

class CConcreteProductA2 : public CProductA
{
public:
	CConcreteProductA2(){}
	~CConcreteProductA2(){}

private:

public:
	void Funtion()
	{
		std::cout << "Concrete product A2 \n" << std::endl;
	}
};


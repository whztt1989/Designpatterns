#pragma once
#include "Company.h"

class CHumanResouceDepartment : public CCompany
{
public:
	CHumanResouceDepartment(std::string vName) : CCompany(vName){}
	~CHumanResouceDepartment(){}

private:

public:
	void show(int vDepth)
	{
		for (int i =0; i < vDepth; i++)
		{
			std::cout << "_";
		}
		std::cout << m_CompanyName << std::endl;
	}
};

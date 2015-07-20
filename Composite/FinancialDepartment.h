#pragma once
#include "Company.h"

class CFinancialDepartment : public CCompany
{
public:
	CFinancialDepartment(std::string vName) : CCompany(vName){}
	~CFinancialDepartment(){}

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

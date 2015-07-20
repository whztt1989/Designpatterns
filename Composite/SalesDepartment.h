#pragma once
#include "Company.h"

class CSalesDepartment : public CCompany
{
public:
	CSalesDepartment(std::string vName) : CCompany(vName){}
	~CSalesDepartment(){}

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

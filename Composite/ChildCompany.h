#pragma once
#include "Company.h"
#include <string>

class CChildCompany : public CCompany
{
public:
	CChildCompany(std::string vName) : CCompany(vName){}
	~CChildCompany(){}

private:
	std::list<CCompany*> m_ListCompany;

public:
	void add(CCompany* vCompany)
	{
		m_ListCompany.push_back(vCompany);
	}

	void remove(CCompany* vCompany)
	{
		m_ListCompany.pop_back();
	}

	void show(int vDepth)
	{
		for (int i = 0; i < vDepth; i++)
			std::cout << "_";
			std::cout << m_CompanyName << std::endl;
		
		std::list<CCompany*>::iterator it = m_ListCompany.begin();

		for ( ; it != m_ListCompany.end(); it++)
		{
			(*it)->show(vDepth+2);
		}

	}
};


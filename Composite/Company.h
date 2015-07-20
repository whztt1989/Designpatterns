#pragma once
#include <iostream>
#include <list>

class CCompany
{
public:
	CCompany(std::string vName) : m_CompanyName(vName){}
	virtual ~CCompany(){}

protected:
	std::string m_CompanyName;

private:

public:
	virtual void add(CCompany* vCompany){}
	virtual void remove(CCompany* vCompany){}

	virtual void show(int vDepth){}
	
};


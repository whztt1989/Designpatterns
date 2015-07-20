#pragma once
#include <string>

class CPassenger
{
public:
	CPassenger(const std::string& vName):m_Name(vName){}
	~CPassenger(){}

	std::string getName() const
	{
		return m_Name;
	}
private:
	std::string m_Name;
};

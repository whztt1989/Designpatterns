#pragma once
#include <iostream>
#include <string>

class CLandlord
{
public:
	CLandlord(const std::string& vName, const std::string& vHouseType):m_LandlordName(vName),m_HouseType(vHouseType){}
	~CLandlord(){}

private:
	std::string m_LandlordName;
	std::string m_HouseType;

public:
	void showHouseInfo() const
	{
		std::cout << m_LandlordName << "有一套房子" << m_HouseType  << std::endl;
	}

	std::string getName() const
	{
		return m_LandlordName;
	}

	std::string getHouseType() const
	{
		return m_HouseType;
	}
};
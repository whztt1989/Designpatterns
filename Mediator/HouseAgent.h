#pragma once
#include <map>
#include "Landlord.h"

class CHouseAgent
{
public:
	CHouseAgent(){}
	~CHouseAgent(){}

private:
	std::map<std::string, const CLandlord*> m_HouseInfoMap;

public:
	void findHouse(const std::string& vNeedHouseType)
	{
// 		for (std::map<std::string, const CLandlord*>::iterator it = m_HouseInfoMap.begin(); it != m_HouseInfoMap.end(); it++)
// 		{
// 		}
		std::map<std::string, const CLandlord*>::iterator it = m_HouseInfoMap.find(vNeedHouseType);

		if (it != m_HouseInfoMap.end())
		{
			it->second->showHouseInfo();
		}
		else
		{
			std::cout << "不存在该房屋" << std::endl;
		}
	}

	void registerHouse(const CLandlord* vLandlord)
	{
		m_HouseInfoMap.insert(std::map<std::string, const CLandlord*>::value_type(vLandlord->getHouseType(), vLandlord));
	}
};

#pragma once
#include "HouseAgent.h"

class CTenant
{
public:
	CTenant(const std::string& vNeedHouseType, CHouseAgent* vHouseAgent):m_NeedHouseType(vNeedHouseType), m_pHouseAgent(vHouseAgent){}
	~CTenant(){}

private:
	std::string m_NeedHouseType;
	CHouseAgent* m_pHouseAgent;

public:
	void findHouse() const
	{
		m_pHouseAgent->findHouse(m_NeedHouseType);
	}
};

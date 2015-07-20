#pragma once
#include <iostream>
#include "Command.h"

class CBossReceiver
{
public:
	CBossReceiver(){}
	//CBossReceiver(int vNum):m_Number(vNum){}
	~CBossReceiver(){}

private:
	int m_Number;
public:
	void barbecue(CCommand* vCommand)
	{
		std::cout << vCommand->m_ID << "ºÅ×Àµã²Í," << "ÉÕ¿¾" << vCommand->m_Number  << "´®" << std::endl;
	}

	void calculateBill(CCommand* vCommand)
	{
		std::cout << vCommand->m_ID << "ºÅ×À½áÕË," << vCommand->m_Number  << "´®£¬×Ü¹²" << vCommand->m_Number * 0.5 << "Ôª"<< std::endl; 
	}
};

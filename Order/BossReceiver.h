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
		std::cout << vCommand->m_ID << "�������," << "�տ�" << vCommand->m_Number  << "��" << std::endl;
	}

	void calculateBill(CCommand* vCommand)
	{
		std::cout << vCommand->m_ID << "��������," << vCommand->m_Number  << "�����ܹ�" << vCommand->m_Number * 0.5 << "Ԫ"<< std::endl; 
	}
};

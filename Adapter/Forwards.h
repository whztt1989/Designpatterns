#pragma once
#include "Player.h"

class CForwards : public CPlayer
{
public:
	CForwards(std::string vName) : CPlayer(vName){}
	~CForwards(){}

private:

public:
	void attack()
	{
		std::cout << m_Name <<  "_"<< "Forwards attack" <<std::endl;
	}

	void Defense()
	{
		std::cout << m_Name <<  "_" << "Forwards defense" << std::endl;
	}
};

#pragma once
#include "Player.h"

class CCenter : public CPlayer
{
public:
	CCenter(std::string vName) : CPlayer(vName){}
	~CCenter(){}

private:

public:
	void attack()
	{
		std::cout << m_Name <<  "_"<< "Center attack" <<std::endl;
	}

	void Defense()
	{
		std::cout << m_Name <<  "_" << "Center defense" << std::endl;
	}
};
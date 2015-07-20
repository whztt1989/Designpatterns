#pragma once
#include "Player.h"

class CGuards : public CPlayer
{
public:
	CGuards(std::string vName) : CPlayer(vName){}
	~CGuards(){}

private:

public:
	void attack()
	{
		std::cout << m_Name <<  "_"<< "Guards attack" <<std::endl;
	}

	void Defense()
	{
		std::cout << m_Name <<  "_" << "Guards defense" << std::endl;
	}
};
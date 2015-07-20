#pragma once
#include "Player.h"

class CForeignerPlayer
{
public:
	CForeignerPlayer()
	{

	}
	CForeignerPlayer(std::string vName):m_FName(vName){}
	~CForeignerPlayer(){}

public:
	std::string m_FName;

public:
// 	std::string getName()
// 	{
// 		return m_FName;
// 	}

	void attack()
	{
		std::cout << m_FName <<  "_"<< "CForeignerPlayer attack" <<std::endl;
	}

	void Defense()
	{
		std::cout << m_FName <<  "_" << "CForeignerPlayer defense" << std::endl;
	}
};
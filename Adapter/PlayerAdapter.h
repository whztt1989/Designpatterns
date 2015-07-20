#pragma once
#include "Player.h"
#include "ForeignerPlayer.h"

class CPlayerAdapter : public CPlayer
{
public:
	CPlayerAdapter(std::string vName) : CPlayer(vName)
	{
		//ForeignerPlayer.getName() = vName;
		ForeignerPlayer.m_FName = vName;
	}

	~CPlayerAdapter(){}

private:
	CForeignerPlayer ForeignerPlayer;

public:
	void attack()
	{
		//std::cout << m_Name <<  "_"<< "Player adapter attack" <<std::endl;
		ForeignerPlayer.attack();
	}

	void Defense()
	{
		//std::cout << m_Name <<  "_" << "Player adapter defense" << std::endl;
		ForeignerPlayer.Defense();
	}
};
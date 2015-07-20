#pragma once
#include <iostream>
#include <string>

class CPlayer
{
public:
	CPlayer(std::string vName):m_Name(vName){}
	virtual ~CPlayer(){}

protected:
	std::string m_Name;

public:
	virtual void attack(){}
	virtual void Defense(){}
};


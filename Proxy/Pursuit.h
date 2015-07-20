#pragma once
#include <iostream>
#include <string>

class CPursuit
{
public:
	CPursuit(const std::string& vName):m_PersuitName(vName){}
	virtual ~CPursuit(){}

protected:
	std::string m_PersuitName;

public:
	virtual void _sentFlowersV() = 0;
	virtual void _sentDollsV() = 0;
	virtual void _sentChocolateV() = 0;
};

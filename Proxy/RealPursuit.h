#pragma once
#include "Pursuit.h"

class CRealPursuit : public CPursuit
{
public:
	CRealPursuit(const std::string& vRealName):CPursuit(vRealName){}
	~CRealPursuit(){}

private:

public:
	void _sentFlowersV()
	{
		std::cout << m_PersuitName << " sent flowers" << std::endl;
	}

	void _sentDollsV()
	{
		std::cout << m_PersuitName << " sent dolls" << std::endl;
	}

	void _sentChocolateV()
	{
		std::cout << m_PersuitName << " sent chocolates" << std::endl;
	}
};

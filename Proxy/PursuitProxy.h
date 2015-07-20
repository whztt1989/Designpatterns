#pragma once
#include "Pursuit.h"
#include "RealPursuit.h"

class CPursuitProxy : public CPursuit
{
public:
	CPursuitProxy(const std::string& vProxyName):CPursuit(vProxyName), m_pRealPrusuit(NULL){}
	~CPursuitProxy(){}

private:
	CRealPursuit* m_pRealPrusuit;	

public:
	void _sentFlowersV()
	{
		if (m_pRealPrusuit == NULL)
		{
			m_pRealPrusuit = new CRealPursuit(m_PersuitName);
		}
		m_pRealPrusuit->_sentFlowersV();
	}

	void _sentDollsV()
	{
		if (m_pRealPrusuit == NULL)
		{
			m_pRealPrusuit = new CRealPursuit(m_PersuitName);
		}
		m_pRealPrusuit->_sentDollsV();
	}

	void _sentChocolateV()
	{
		if (m_pRealPrusuit == NULL)
		{
			m_pRealPrusuit = new CRealPursuit(m_PersuitName);
		}
		m_pRealPrusuit->_sentChocolateV();
	}
};

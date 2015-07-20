#pragma once
#include "Command.h"
#include <list>

class CWaiterInvoker
{
public:
	CWaiterInvoker(){}
	~CWaiterInvoker(){}

private:
	std::list<CCommand*> m_CommandList;

public:
	void callCommand()
	{
		for (std::list<CCommand*>::iterator it = m_CommandList.begin(); it != m_CommandList.end(); it++)
		{
			(*it)->excuteV();
		}
	}

	void setOrder(CCommand* vCommand)
	{
		m_CommandList.push_back(vCommand);
	}

	void cancelOrder(CCommand* vCommand)
	{
		m_CommandList.remove(vCommand);
	}
};

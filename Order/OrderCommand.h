#pragma once
#include "Command.h"
#include "BossReceiver.h"

class COrderCommand : public CCommand
{
public:
	COrderCommand(int vID, int vNum):CCommand(vID, vNum){}
	~COrderCommand(){}

private:
	CBossReceiver* m_pBoss;

public:
	void excuteV() override
	{
		m_pBoss->barbecue(this);
	}
};

#pragma once
#include "Command.h"
#include "BossReceiver.h"

class CSetbillCommand : public CCommand
{
public:
	CSetbillCommand(){}
	CSetbillCommand(int vID, int vNum):CCommand(vID, vNum){}
	~CSetbillCommand(){}

private:
	CBossReceiver* m_pBoss;
public:
	void excuteV() override
	{
		m_pBoss->calculateBill(this);
	}
};

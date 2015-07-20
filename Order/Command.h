#pragma once

class CCommand
{
public:
	CCommand(){}
	CCommand(int vID, int vNum):m_ID(vID),m_Number(vNum){}
	virtual ~CCommand(){}

public:
	int m_ID;
	int m_Number;

private:

public:
	virtual void excuteV() = 0;
};

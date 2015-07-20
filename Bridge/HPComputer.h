#pragma once
#include "Computer.h"

class CHPComputer : public CComputer
{
public:
	CHPComputer(){}
	~CHPComputer(){}

private:

public:
	void InstallOS(COS* vOS)
	{
		vOS->InstallOSImpl();
	}
};

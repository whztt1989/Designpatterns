#pragma once
#include "Computer.h"

class CDellComputer : public CComputer
{
public:
	CDellComputer(){}
	~CDellComputer(){}

private:

public:
	void InstallOS(COS* vOS)
	{
		vOS->InstallOSImpl();
	}
};

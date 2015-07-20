#pragma once
#include "Computer.h"

class CAppleComputer : public CComputer
{
public:
	CAppleComputer(){}
	~CAppleComputer(){}

private:

public:
	void InstallOS(COS* vOS)
	{
		vOS->InstallOSImpl();
	}
};

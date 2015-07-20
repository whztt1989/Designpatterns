#pragma once
#include "Os.h"

class CComputer
{
public:
	CComputer(){}
	virtual ~CComputer(){}

private:

public:
	virtual void InstallOS(COS* vOS){}

};
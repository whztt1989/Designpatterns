#pragma once
#include "Os.h"

class CWindowsOS : public COS
{
public:
	CWindowsOS(){}
	~CWindowsOS(){}

private:

public:
	void InstallOSImpl()
	{
		std::cout << "Install windows os" << std::endl;
	}
};
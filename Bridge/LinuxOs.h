#pragma once
#include "Os.h"

class CLinuxOS : public COS
{
public:
	CLinuxOS(){}
	~CLinuxOS(){}

private:

public:
	void InstallOSImpl()
	{
		std::cout << "Install linux os" << std::endl;
	}
};


#pragma once
#include "Os.h"

class CMacOS : public COS
{
public:
	CMacOS(){}
	~CMacOS(){}

private:

public:
	void InstallOSImpl()
	{
		std::cout << "Install max os" << std::endl;
	}
};
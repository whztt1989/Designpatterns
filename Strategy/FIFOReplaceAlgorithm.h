#pragma once
#include "ReplaceAlgorithm.h"

class CFIFOReplaceAlgorithm : public CReplaceAlgorithm
{
public:
	CFIFOReplaceAlgorithm(){}
	~CFIFOReplaceAlgorithm(){}

private:

public:
	void replace() override
	{
		std::cout << "FIFO replace algorithm " << std::endl;
	}
};
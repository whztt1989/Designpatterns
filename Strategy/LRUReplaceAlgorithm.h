#pragma once
#include "ReplaceAlgorithm.h"

class CLRUReplaceAlgorithm : public CReplaceAlgorithm
{
public:
	CLRUReplaceAlgorithm(){}
	~CLRUReplaceAlgorithm(){}

private:

public:
	void replace() override
	{
		std::cout << "LRU replace algorithm " << std::endl;
	}
};
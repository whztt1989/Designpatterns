#pragma once
#include "ReplaceAlgorithm.h"

class CRandomReplaceAlgorithm : public CReplaceAlgorithm
{
public:
	CRandomReplaceAlgorithm(){}
	~CRandomReplaceAlgorithm(){}

private:

public:
	void replace() override
	{
		std::cout << "Random replace algorithm " << std::endl;
	}
};
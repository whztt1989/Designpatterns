#pragma once
#include "Iterator.h"

class CAggregate
{
public:
	CAggregate(){}
	virtual ~CAggregate(){}

private:

public:
	virtual CIterator* createIterator() = 0;
};

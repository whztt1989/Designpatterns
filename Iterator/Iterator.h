#pragma once
#include "Passenger.h"

class CIterator
{
public:
	CIterator(){}
	virtual ~CIterator(){}

private:

public:
	virtual bool isEnd()=0;
	virtual CPassenger* first()=0;
	virtual CPassenger* next()=0;
	virtual CPassenger* currentItem()=0;
};

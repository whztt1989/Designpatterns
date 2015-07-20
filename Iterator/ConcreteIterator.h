#pragma once
#include "Iterator.h"

class CConcreteAggregate;

class CConcreteIterator : public CIterator
{
public:
	CConcreteIterator(CConcreteAggregate* vConcreteAggregate) : m_CurrentIndex(0), m_pTrainPassenger(vConcreteAggregate){}
	~CConcreteIterator(){}

private:
	CConcreteAggregate* m_pTrainPassenger;
	int m_CurrentIndex;

public:
	CPassenger* first();
 	CPassenger* next();
 	CPassenger* currentItem();
 	bool isEnd();
};


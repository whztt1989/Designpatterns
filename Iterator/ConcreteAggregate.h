#pragma once
#include <list>
#include <iostream>
#include "Aggregate.h"
#include "ConcreteIterator.h"

class CConcreteAggregate : public CAggregate
{
public:
	CConcreteAggregate(){}
	~CConcreteAggregate(){}

private:
	std::list<CPassenger*> m_ListPassenger;

public:
	CIterator* createIterator()
	{
		return new CConcreteIterator(this);
	}

	void add(CPassenger* vPassenger)
	{
		m_ListPassenger.push_back(vPassenger);
	}

	std::list<CPassenger*> getListPassenger()
	{
		return m_ListPassenger;	
	}

	CPassenger* at(int vIndex)
	{
		std::list<CPassenger*>::iterator it = m_ListPassenger.begin();
		std::advance(it, vIndex);

		return *it;
	}
};
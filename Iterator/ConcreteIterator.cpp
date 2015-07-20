#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

CPassenger* CConcreteIterator::first()
{
	return m_pTrainPassenger->getListPassenger().front();
}

CPassenger* CConcreteIterator::next()
{
	m_CurrentIndex++;
	 
	if (m_CurrentIndex < m_pTrainPassenger->getListPassenger().size())
	{
	 //	std::cout << m_pTrainPassenger->at(m_CurrentIndex) << std::endl;
		return m_pTrainPassenger->at(m_CurrentIndex);
	}
	else
	{
		return NULL;
	}
}

CPassenger* CConcreteIterator::currentItem()
{
	return m_pTrainPassenger->at(m_CurrentIndex);
}

bool CConcreteIterator::isEnd()
{
	return m_CurrentIndex >= m_pTrainPassenger->getListPassenger().size();
}



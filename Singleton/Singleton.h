#pragma once
#include <iostream>
#include <boost/thread/thread.hpp>

class CSingleton
{
private:
	CSingleton()
	{
		std::cout << "Singleton mode" << std::endl;
	}
	~CSingleton(){}

private:
	static CSingleton* m_pInstance;

public:
	static CSingleton* getInstance()
	{
		if (NULL == m_pInstance)
		{
			boost::mutex Mutex;
			boost::mutex::scoped_lock Lock(Mutex);

			if (NULL == m_pInstance)
			{
				m_pInstance = new CSingleton();
			}
		}
		return m_pInstance;
	}
};

CSingleton* CSingleton::m_pInstance = NULL;

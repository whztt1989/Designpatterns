#pragma once

template<typename T>
class CCache
{
public:
	CCache(){}
	~CCache(){}

private:
	T m_Cache;

public:
	void replace()
	{
		m_Cache.replace();
	}
};
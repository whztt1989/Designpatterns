#pragma once
#include "Builder.h"

class CDirector
{
public:
	CDirector(CBuilder* vBuilder) : m_pBuilder(vBuilder)
	{
	}
	~CDirector(){}


private:
	CBuilder* m_pBuilder;

public:
	void createComputer()
	{
		m_pBuilder->buildCPU();
		m_pBuilder->buildDisk();
		m_pBuilder->buildDisplay();
		m_pBuilder->buildKeyboard();
		m_pBuilder->buildMouse();
	}
};

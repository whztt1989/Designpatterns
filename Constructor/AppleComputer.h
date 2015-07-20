#pragma once
#include "Builder.h"

class CAppleComputer : public CBuilder
{
public:
	CAppleComputer(){}
	~CAppleComputer(){}

private:

public:
	void buildCPU()
	{
		std::cout << "Apple computer cpu" << std::endl;
	}

	void buildDisk()
	{
		std::cout << "Apple computer disk" << std::endl;
	}

	void buildDisplay()
	{
		std::cout << "Apple computer display" << std::endl;
	}

	void buildKeyboard()
	{
		std::cout << "Apple computer keyboard" << std::endl;
	}

	void buildMouse()
	{
		std::cout << "Apple computer mouse" << std::endl;
	}
};


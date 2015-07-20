#pragma once
#include "Builder.h"

class CLenovoComputer : public CBuilder
{
public:
	CLenovoComputer(){}
	~CLenovoComputer(){}

private:

public:
	void buildCPU()
	{
		std::cout << "Lenovo computer cpu" << std::endl;
	}

	void buildDisk()
	{
		std::cout << "Lenovo computer disk" << std::endl;
	}

	void buildDisplay()
	{
		std::cout << "Lenovo computer display" << std::endl;
	}

	void buildKeyboard()
	{
		std::cout << "Lenovo computer keyboard" << std::endl;
	}

	void buildMouse()
	{
		std::cout << "Lenovo computer mouse" << std::endl;
	}
};


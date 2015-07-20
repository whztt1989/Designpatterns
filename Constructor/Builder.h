#pragma once
#include <iostream>

class CBuilder
{
public:
	CBuilder(){}
	virtual ~CBuilder(){}

private:

public:
	virtual void buildCPU(){}
	virtual void buildDisk(){}
	virtual void buildDisplay(){}
	virtual void buildKeyboard(){}
	virtual void buildMouse(){}
};

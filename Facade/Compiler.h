#pragma once
#include "Scanner.h"
#include "Parser.h"
#include "MiddleCode.h"
#include "MachineCode.h"

class CCompiler
{
public:
	CCompiler(){}
	~CCompiler(){}

private:
	CScanner m_Scanner;
	CParser m_Parser;
	CMiddleCode m_MiddleCode;
	CMachindeCode m_MarchineCode;

public:
	void run()
	{
		m_Scanner.scan();
		m_Parser.parser();
		m_MiddleCode.middleCode();
		m_MarchineCode.machineCode();
	}
};

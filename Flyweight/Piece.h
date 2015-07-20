#pragma once
#include "PieceAttribute.h"
#include <iostream>

class CPiece
{
public:
	CPiece(const PieceColor& vColor):m_PieceColor(vColor){}
	virtual ~CPiece(){}

private:

protected:
	PieceColor m_PieceColor;

public:
	virtual void draw(){}
};

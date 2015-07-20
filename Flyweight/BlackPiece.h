#pragma once
#include "Piece.h"

class CBlackPiece : public CPiece
{
public:
	CBlackPiece(const PieceColor& vBlackColor):CPiece(vBlackColor){}
	~CBlackPiece(){}

private:

public:
	void draw() override
	{
		std::cout << "Draw black piece" << std::endl;
	}
};

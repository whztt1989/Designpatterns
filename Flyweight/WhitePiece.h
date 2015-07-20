#pragma once
#include "Piece.h"

class CWhitePiece : public CPiece
{
public:
	CWhitePiece(const PieceColor& vWhiteColor):CPiece(vWhiteColor){}
	~CWhitePiece(){}

private:

public:
	void draw() override
	{
		std::cout << "Draw white piece" << std::endl;
	}
};

#pragma once
#include "Piece.h"
#include "PieceAttribute.h"
#include <vector>
#include <iostream>
#include <string>

class CPieceBoard
{
public:
	CPieceBoard(const std::string& vBlack, const std::string& vWhite):m_BlackName(vBlack), m_WhiteName(vWhite)
	{
		m_pBlackPiece = NULL;
		m_pWhitePiece = NULL;
	}
	~CPieceBoard()
	{
		delete m_pBlackPiece;
		delete m_pWhitePiece;
	}

private:
	std::vector<SPiecePosition> m_PiecePosition;
	CPiece* m_pBlackPiece;
	CPiece* m_pWhitePiece;
	std::string m_BlackName;
	std::string m_WhiteName;

public:
	void setPiece(const PieceColor& vColor, const SPiecePosition& vPosition)
	{
		if (BLACK == vColor)
		{
			if (NULL == m_pBlackPiece)
			{
				m_pBlackPiece = new CBlackPiece(BLACK);
			}
			std::cout << m_BlackName << " position is " << vPosition.m_X << "  " << vPosition.m_Y << std::endl;
		}//end if
		else
		{
			if (NULL == m_pBlackPiece)
			{
				m_pBlackPiece = new CWhitePiece(WHITE);
			}
			std::cout << m_WhiteName << " position is " << vPosition.m_X << "  " << vPosition.m_Y << std::endl;
		}//end else
		m_PiecePosition.push_back(vPosition);
	}
};

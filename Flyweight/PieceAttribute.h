#pragma once

enum PieceColor
{
	BLACK,
	WHITE
};

struct SPiecePosition
{
	int m_X;
	int m_Y;
	SPiecePosition(int x, int y):m_X(x),m_Y(y){}
};
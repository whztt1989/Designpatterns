#include "BlackPiece.h"
#include "WhitePiece.h"
#include "PieceBoard.h"

int main()
{
	CPieceBoard PieceBoard("A", "B");
	PieceBoard.setPiece(BLACK, SPiecePosition(4, 4));  
	PieceBoard.setPiece(WHITE, SPiecePosition(4, 16));  
	PieceBoard.setPiece(BLACK, SPiecePosition(16, 4));  
	PieceBoard.setPiece(WHITE, SPiecePosition(16, 16)); 

	return 1;
}
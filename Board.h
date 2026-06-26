#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

class Board
{
private:
    Piece board[8][8];

    bool IsValidSquare(int row, int col);


public:

   void InitializeBoard();
   void PrintBoard();
   bool MovePiece(int startRow, int startCol, int endRow, int endCol);
};
#endif




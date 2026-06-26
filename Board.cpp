#include "Board.h"

void Board::InitializeBoard() {

    for (int row = 0; row < 8; row++ ) {
       for (int col = 0; col < 8; col++ ) {

           board[row][col].type = EMPTY;
           board[row][col].color = NO_COLOR;
       }
    }
    for (int col = 0; col < 8; col++)
    {
        board[1][col].type = PAWN;
        board[1][col].color = BLACK;

        board[6][col].type = PAWN;
        board[6][col].color = WHITE;
};
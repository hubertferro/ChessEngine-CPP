#ifndef PIECE_H
#define PIECE_H

enum PieceType {
    EMPTY,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

enum Color {
    NO_COLOR,
    WHITE,
    BLACK
};

struct Piece {
    PieceType type;
    Color color;
};

#endif

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "piece.h"

class Knight: public Piece {
public:
    Knight(Color);
    bool can_move(Position from, Position to) const;
};

#endif //CHESS_KNIGHT_H

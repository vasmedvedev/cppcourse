#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include "piece.h"

class Pawn: public Piece {
public:
    Pawn(Color color);
    bool can_move(Position from, Position to) const;
    bool has_moved() const;
    void mark_as_moved();

private:
    bool has_moved_;
};

#endif //CHESS_PAWN_H

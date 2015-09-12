#include "pawn.h"

Pawn::Pawn(Color color): Piece(color) {
    has_moved_ = false;
}

bool Pawn::can_move(Position from, Position to) const {
    if (from.column - to.column != 0) {
        return false;
    }
    switch(get_color()) {
        case WHITE:
            return has_moved() ? to.row - from.row == 1 : to.row - from.row == 2 || to.row - from.row == 1;
        case BLACK:
            return has_moved() ? from.row - to.row == 1 : from.row - to.row == 2 || from.row - to.row == 1;
        default:
            return false;
    }
}

bool Pawn::has_moved() const {
    return has_moved_;
}

void Pawn::mark_as_moved() {
    has_moved_ = true;
}
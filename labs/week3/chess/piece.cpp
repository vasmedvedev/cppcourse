#include "piece.h"

Piece::Piece(Color color): color_(color) {}

Color Piece::get_color() const {
    return color_;
}

Position::Position(int r, int c) {
    row = r;
    column = c;
}

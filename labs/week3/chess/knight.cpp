#include "knight.h"
#include <cstdlib>

Knight::Knight(Color color): Piece(color) {}

bool Knight::can_move(Position from, Position to) const {
    double column_diff = std::abs(from.column - to.column);
    double row_diff = std::abs(from.row - to.row);
    return (row_diff == 1 && column_diff == 2) || (row_diff == 2 && column_diff == 1);
}

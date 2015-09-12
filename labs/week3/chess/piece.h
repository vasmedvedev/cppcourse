#ifndef CHESS_CHESS_PIECES_H
#define CHESS_CHESS_PIECES_H

enum Color{WHITE, BLACK};

struct Position {
    Position(int, int);
    int row;
    int column;
};

class Piece {
public:
    Piece(Color color);
    virtual bool can_move(Position from, Position to) const = 0;
    Color get_color() const;

private:
    Color color_;
};

#endif //CHESS_CHESS_PIECES_H

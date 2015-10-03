#ifndef TICTACTOE_TICTACTOE_H
#define TICTACTOE_TICTACTOE_H

#include <string>
#include <unordered_map>

class TicTacToe {

public:
    TicTacToe();
    void start();
    bool game_over();
    bool check_move(int row, int col);
    void draw_board();
    bool player_move(int row, int col, int player);

    static const int O;
    static const int X;

private:
    std::unordered_map<int, char> char_map = {
        {0, ' '},
        {1, 'X'},
        {2, 'O'}
    };
    static const std::string SPACE;
    static const std::string LINE;
    int board[3][3];
    bool check_rows();
    bool check_cols();
    bool check_diagonals();
};

#endif //TICTACTOE_TICTACTOE_H

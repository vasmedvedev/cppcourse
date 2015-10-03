#include "tictactoe.h"
#include <iostream>
#include <utility>

using namespace std;

const string TicTacToe::SPACE = "   ";
const int TicTacToe::X = 1;
const int TicTacToe::O = 2;
const string TicTacToe::LINE = "-----------";

TicTacToe::TicTacToe() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            board[row][col] = 0;
        }
    }
}

void TicTacToe::draw_board() {
    cout << LINE << endl;
    for(int row = 0; row < 3; row++) {
        cout << "|";
        for(int col = 0; col < 3; col++) {
            cout << char_map[board[row][col]] << (col == 2 ? "|" : SPACE);
        }
        cout << endl;
    }
    cout << LINE << endl;
}

bool TicTacToe::game_over() {
    return check_rows() || check_cols() || check_diagonals();
}

bool TicTacToe::check_rows() {
    for(int row = 0; row < 3; row++) {
        if( ((board[row][0] == board[row][1]) && (board[row][0] == board[row][2])) && board[row][0]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_cols() {
    for(int col = 0; col < 3; col++) {
        if( ((board[0][col] == board[1][col]) && (board[0][col] == board[2][col])) && board[0][col]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonals() {
    if( (board[1][1] > 0) && (
            (board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        )
    ) {
        return true;
    }
    return false;
}

bool TicTacToe::check_move(int row, int col) {
    if (row > 2 || col > 2) {
        return false;
    }
    return board[row][col] == 0;
}

bool TicTacToe::player_move(int row, int col, int player) {
    if(check_move(row, col)) {
        board[row][col] = player;
        return true;
    }
    return false;
}

void TicTacToe::start() {
    draw_board();
    pair<int, int> Players(X, O);
    pair<int, int> Swapped(O, X);
    int row, column;
    while(!game_over()) {
        cout << "Player " << char_map[Players.first] << ", make your move, row and column on separate lines" << endl;
        cin >> row >> column;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(player_move(row, column, Players.first)) {
            draw_board();
            swap(Players, Swapped);
        } else {
            draw_board();
        }
    }
    draw_board();
    cout << "Game Over" << endl;
    return;
}

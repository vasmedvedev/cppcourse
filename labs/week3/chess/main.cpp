#include <iostream>
#include "piece.h"
#include "pawn.h"
#include "knight.h"

using namespace std;

int main() {
    Position white_pawn_pos {2, 2};
    Position black_pawn_pos {7, 7};

    Position black_knight_pos {4, 4};

    Pawn white_pawn(WHITE);
    Pawn black_pawn(BLACK);

    Knight black_knight(BLACK);

    Position B3 {3, 2};
    Position B4 {4, 2};
    Position B5 {5, 2};

    Position G6 {6, 7};
    Position G5 {5, 7};
    Position G8 {8, 7};

    cout << "White pawn from B2 to B3: " << white_pawn.can_move(white_pawn_pos, B3) << endl;
    cout << "White pawn from B2 to B4: " << white_pawn.can_move(white_pawn_pos, B4) << endl;
    cout << "White pawn from B2 to B5: " << white_pawn.can_move(white_pawn_pos, B5) << endl;

    cout << "Black pawn from G7 to G6: " << black_pawn.can_move(black_pawn_pos, G6) << endl;
    cout << "Black pawn from G7 to G5: " << black_pawn.can_move(black_pawn_pos, G5) << endl;
    cout << "Black pawn from G7 to G8: " << black_pawn.can_move(black_pawn_pos, G8) << endl;

    cout << "Knight move from D4 to B5: " << black_knight.can_move(black_knight_pos, Position(5, 2)) << endl;
    cout << "Knight move from D4 to C2: " << black_knight.can_move(black_knight_pos, Position(2, 3)) << endl;

    return 0;
}
#include <iostream>
#include "chess/board.h"

/* NOTE: we have copied only the chess board & move representation code from lczero
 * into this project as a static library, compiled with cmake. 
 * this is not how lczero compiled the code, so there are some rough edges. 
 */

int main() {
    lczero::InitializeMagicBitboards(); //trippy! need to run this before anything else
    lczero::ChessBoard board;
    board.SetFromFen("Q3b3/2P2pnk/3R3p/p7/1pp1p3/PnP1P2P/2B2PP1/5RK1 w - - 1 31");

    std::cout << board.DebugString() << std::endl;
    auto moves = board.GenerateLegalMoves();
    board.ApplyMove(moves[0]);
    std::cout << board.DebugString() << std::endl;

    // for (auto move: moves) {
    //     std::cout << move.as_string() << std::endl;
    // }

    return 0;
}
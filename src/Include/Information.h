#pragma once

#ifndef INFORMATION_H
#define INFORMATION_H

#include "Library.h"

class Chess_Pieces {
private:
    string White_King = "♔";
    string Black_King = "♚";
    string White_Queen = "♕";
    string Black_Queen = "♛";
    string White_Rook = "♖";
    string Black_Rook = "♜";
    string White_Knight = "♘";
    string Black_Knight = "♞";
    string White_Bishop = "♗";
    string Black_Bishop = "♝";
    string White_Pawn = "♙";
    string Black_Pawn = "♟";
    string Empty = " ";

public:
    string getWhiteKing() {
        return White_King;
    }

    string getBlackKing() {
        return Black_King;
    }

    string getWhiteQueen() {
        return White_Queen;
    }

    string getBlackQueen() {
        return Black_Queen;
    }

    string getWhiteRook() {
        return White_Rook;
    }

    string getBlackRook() {
        return Black_Rook;
    }

    string getWhiteKnight() {
        return White_Knight;
    }

    string getBlackKnight() {
        return Black_Knight;
    }

    string getWhiteBishop() {
        return White_Bishop;
    }

    string getBlackBishop() {
        return Black_Bishop;
    }

    string getWhitePawn() {
        return White_Pawn;
    }

    string getBlackPawn() {
        return Black_Pawn;
    }

    string getEmpty() {
        return Empty;
    }
};

#endif //INFORMATION_H

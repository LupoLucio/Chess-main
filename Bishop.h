#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
/*
Classe che definisce il pezzo King
*/
class Bishop : public Piece
{
public:
    string name;

    Bishop(string s, Color color, bool alive, Position pos);

    void printPiece();
};

#endif

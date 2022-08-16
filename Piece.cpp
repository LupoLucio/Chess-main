#include "Piece.h"

Piece::Piece(Color color, bool alive, Position pos)
{
    m_color = color;
    isAlive = alive;
    p = pos;
}
void Piece::move(Position newP)
{
    p = newP;
}
Position Piece::getPosition()
{
    return p;
}

void Piece::printPiece() { }

void Piece::printControlledPos()
{
    cout << "controlledPos are : " << endl;
    for (int i = 0; i < controlledPos.size(); i++)
    {
        controlledPos[i].printPosition();
    }
}

void Piece::printAccessiblePos()
{
    cout << "AccessiblePos are : " << endl;
    for (int i = 0; i < accessiblePos.size(); i++)
    {
        accessiblePos[i].printPosition();
    }
}
void Piece::printAllPos()
{
    cout << "All positions are : " << endl;
    printControlledPos();
    printAccessiblePos();
}

bool Piece::operator==(Piece *piece)
{
    return p == piece->p && m_color == piece->m_color;
}

bool Piece::isOppositeColor(Piece *piece)
{
    return m_color != piece->m_color;
}

void Piece::setPosition(Position pos)
{
    p = pos;
}

string Piece::getColorName(Color c)
{
    return c == Color::White ? "White" : "Black";
}

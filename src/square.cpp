#include "square.h"
#include <algorithm>

using namespace std;

Square::Square(int row, int column, int length)
{
    this->row = row;
    this->column = column;
    this->length = length;
}

bool Square::operator==(const Square& other) const
{
    return (row == other.row) && (column == other.column) && (length == other.length);
}

LetterGrid::LetterGrid(string input)
{
}

int LetterGrid::getRowCount() const
{
    return 0;
}

int LetterGrid::getColumnCount() const
{
    return 0;
}

char LetterGrid::getLetterAt(int row, int column) const
{
    return 0;
}

vector<Square> LetterGrid::getValidSquares() const
{
    return vector<Square>();
}

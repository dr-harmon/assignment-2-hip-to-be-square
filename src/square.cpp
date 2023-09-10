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
    vector<char> row;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ' ') {
            grid.push_back(row);
            row.clear();
        } else {
            row.push_back(input[i]);
        }
    }

    grid.push_back(row);
}

int LetterGrid::getRowCount() const
{
    return grid.size();
}

int LetterGrid::getColumnCount() const
{
    return grid[0].size();
}

char LetterGrid::getLetterAt(int row, int column) const
{
    return grid[row][column];
}

vector<Square> LetterGrid::getValidSquares() const
{
    vector<Square> squares;

    for (int row = 0; row < getRowCount(); row++) {
        for (int column = 0; column < getColumnCount(); column++) {
            int maxLength = min(getRowCount() - row, getColumnCount() - column) - 1;
            char letter = getLetterAt(row, column);
            for (int length = 1; length <= maxLength; length++) {
                if (getLetterAt(row + length, column         ) == letter &&
                    getLetterAt(row + length, column + length) == letter &&
                    getLetterAt(row         , column + length) == letter) {
                        squares.push_back(Square(row, column, length));
                    }
            }
        }
    }

    return squares;
}

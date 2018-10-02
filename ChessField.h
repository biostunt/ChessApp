//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H

#include "Figure.h"
class Figure;

class ChessField{
private:
    int size;
    Figure ***chessField;
    int *templateField;
    void initialize();
public:
    ChessField(int size);
    ChessField();
    int getSize();
    void add(ChessField *chessField1,int id,int x, int y);
    void startChecking(int x, int y);
    int getFigureId(int x,int y);
};


#endif //CHESSAPP_CHESSFIELD_H

//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H

#include "Figure.h"

class ChessField{
private:
    int size;
    Figure ***chessField;
    void initialize();
public:
    ChessField(int size);
    ChessField();
    int getSize();
    void add(int id,int x, int y);
    void startChecking(int x, int y);
    Figure* getFigure(int x, int y);
};


#endif //CHESSAPP_CHESSFIELD_H

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
    void initialize() {
        chessField = new Figure** [size];
        for (int i = 0; i < size; i++)
            chessField [i] = new Figure* [size];
        for(int i = 0; i < size; i++)
            for(int j = 0 ; j < size; j++)
          chessField[i][j] = new Figure(0,i,j);
  }
public:
    ChessField(int size){
        this->size = size;
        initialize();
    }
    ChessField(){
        this->size = 8;
        initialize();
    }
    int getSize(){
        return size;
    }

};


#endif //CHESSAPP_CHESSFIELD_H

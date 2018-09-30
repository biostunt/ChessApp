//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H

#include "Figure.h"

class ChessField{
private:
    int size, id;
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

    void add(int x, int y){
        switch(id){
            case 1:
                chessField[x][y] = new Figure(id,x,y);
            case 2:
                chessField[x][y] = new Figure(id,x,y);
            case 3:
                chessField[x][y] = new Figure(id,x,y);
            case 4:
                chessField[x][y] = new Figure(id,x,y);
            case 5:
                chessField[x][y] = new Figure(id,x,y);
            case 6:
                chessField[x][y] = new Figure(id,x,y);
        }
    }

    Figure* getFigure(int x, int y){
        return chessField[x][y];
    }
};


#endif //CHESSAPP_CHESSFIELD_H

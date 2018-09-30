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
  void Add(int x, int y){
  	for(int i = 0; i < size; i++)
            for(int j = 0 ; j < size; j++)
  	switch(id){
            case 1:
                chessField[i][j] = new King(x,y);
            case 2:
                chessField[i][j] = new Queen(x,y);
            case 3:
                chessField[i][j] = new Elephant(x,y);
            case 4:
                chessField[i][j] = new Horse(x,y);
            case 5:
                chessField[i][j] = new Rook(x,y);
            case 6:
                chessField[i][j] = new Pawn(x,y);
        }
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

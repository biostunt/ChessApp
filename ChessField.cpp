//
// Created by biostunt on 29.09.18.
//

#include "ChessField.h"
#include "Figure.h"



ChessField::ChessField(int size) {
    this->size = size;
    initialize();
}
ChessField::ChessField(){
    this->size = 8;
    initialize();
}

void ChessField::initialize() {
    chessField = new Figure** [size];
    for (int i = 0; i < size; i++)
        chessField [i] = new Figure* [size];
    for(int i = 0; i < size; i++)
        for(int j = 0 ; j < size; j++)
            chessField[i][j] = new Figure(NULL,0,i,j,size);
    }
int ChessField::getSize() {
    return size;
}

void ChessField::add(ChessField *chessField1, int id,int x, int y){
    if(chessField[x][y]->getId() == 0){
        cout << "Нельзя добавить"; //Добавить ошибку, что в клетке уже  находится фигура
    }
    chessField[x][y] = new Figure(chessField1,id,x,y,size);
}
void ChessField::startChecking(int x, int y){
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            if(chessField[i][j]->getId() != 0)
                chessField[i][j]->checkStatement(chessField[i][j]->getId(),x,y);
}
int ChessField::getFigureId(int x, int y){
    return chessField[x][y]->getId();
}



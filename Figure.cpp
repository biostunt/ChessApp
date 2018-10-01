//
// Created by biostunt on 29.09.18.
//

#include "Figure.h"
#include "CodeStatement.h"
#include "ChessField.h"




//Pawn Class Functions
int Figure::Pawn::checkAte(int x, int y){
    if(this->x + 1 == x && this->y + 1 == y)
        return 1;
    if(this->x + 1 == x && this->y - 1 == y)
        return 1;
    if(this->x - 1 == x && this->y + 1 == y)
        return 1;
    if(this->x - 1 == x && this->y - 1 == y)
        return 1;
    return 2;
}
int Figure::Pawn::checkStep(int x, int y){
    if(this->x == x && this->y + 1 == y)
        return 10;
    else
        return 20;
}
int Figure::Pawn::checkingFunction(int x, int y){
    return checkStep(x,y) + checkAte(x,y);
}

// Figure Class Functions
void Figure::initialize(int x, int y){
    switch(id){
        case 0:
            emptySlot = new EmptySlot(x,y);
        case 1:
            king = new King(x,y);
        case 2:
            queen = new Queen(x,y);
        case 3:
            elephant = new Elephant(x,y);
        case 4:
            horse = new Horse(x,y);
        case 5:
            rook = new Rook(x,y);
        case 6:
            pawn = new Pawn(x,y);
    }
}
int Figure::getCheckingCode(int id,int x, int y){
    switch(id){
        case 6:
            return pawn->checkingFunction(x,y);
    }
}

Figure::Figure(int id, int x, int y){
    this->id = id;
    initialize(x, y);
}
void Figure::checkStatement(int id, int x, int y) {
        codeStatement->decode(id,getCheckingCode(id,x,y));
}
void Figure::setSize(int size) {
        this->size = size;
}
int Figure::getId() {
    return id;
}
void Figure::setField(ChessField *chessField1){
    chessField = chessField1;
}
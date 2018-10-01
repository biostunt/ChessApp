//
// Created by biostunt on 29.09.18.
//

#include "Figure.h"
#include "CodeStatement.h"
#include "ChessField.h"

//Position Class Functions
Figure::Position::Position(int x, int y){
    this->x = x;
    this->y = y;
}

//EmptySlot Class Functions
Figure::EmptySlot::EmptySlot(int x, int y) : Position(x, y){}

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
    if(this->x == x && this->y + 1 == y){
        if(chessField->getFigure(x,y)->getId() == 0)
            return 10;
    }
    else
        return 20;
}
int Figure::Pawn::checkingFunction(int x, int y){
    return checkStep(x,y) + checkAte(x,y);
}

// King Class Functions
Figure::King::King(int x, int y):Pawn(x,y), Position(x,y){}

//Horse Class Functions
Figure::Horse::Horse(int x, int y):Position(x,y) {}
int Figure::Horse::checkingFunction(int x, int y) {
    if(this->x + 2 == x && (this->y + 1 == y || this->y - 1 == y))
        return 11;
    if(this->x - 2 == x && (this->y + 1 == y || this->y - 1 == y))
        return 11;
    if(this->y + 2 == y && (this->x + 1 == x || this->x - 1 == x))
        return 11;
    if(this->y - 2 == y && (this->x + 1 == x || this->x - 1 == x))
        return 11;
    return 22;
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
int Figure::getId() {
    return id;
}
void Figure::setField(ChessField *chessField1){
    chessField = chessField1;
}
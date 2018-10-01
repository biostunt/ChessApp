//
// Created by biostunt on 29.09.18.
//

#include "Figure.h"
#include "CodeStatement.h"
#include "ChessField.h"

//Figure::Position Class Functions
Figure::Position::Position(int x, int y){
    this->x = x;
    this->y = y;
}

//Figure::EmptySlot Class Functions
Figure::EmptySlot::EmptySlot(int x, int y) : Position(x, y){}

//Figure::Pawn Class Functions
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
int Figure::Pawn::checkPawn(int x, int y){
    return checkStep(x,y) + checkAte(x,y);
}

//Figure::King Class Functions
Figure::King::King(int x, int y):Pawn(x,y), Position(x,y){}

//Figure::Horse Class Functions
Figure::Horse::Horse(int x, int y):Position(x,y) {}
int Figure::Horse::checkHorse(int x, int y) {
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

//Figure::Rook Class Functions
Figure::Rook::Rook(int x, int y) : Position(x,y){}
int Figure::Rook::checkRook(int x, int y) {
    if(!onTrajectory(x,y))
        return 22;
    if(Horizontal)
        return checkHorizontal(x);
    if(Vertical)
        return checkVertical(y);
}
bool Figure::Rook::onTrajectory(int x, int y) {
    int size = chessField->getSize();
    int SposX = 0;
    int SposY = 0;
    while(SposX <= size && SposY <= size){
        if(SposX == x && this->y == y){
            Horizontal = true;
            return true;
        }
        if(SposY == y && this->x == y){
            Vertical = true;
            return true;
        }
        SposX++;
        SposY++;
    }
    return false;
}
int Figure::Rook::checkVertical(int y) {
    int posY = this->y + 1;
    while(posY < y){
        if(chessField->getFigure(this->x,posY)->getId() != 0)
            return 31;
        posY++;
    }
    return 11;
}
int Figure::Rook::checkHorizontal(int x) {
    int posX = this->x + 1;
    while(posX < x){
        if(chessField->getFigure(posX,this->y)->getId() != 0)
            return 31;
        posX++;
    }
    return 11;
}

//Figure::Elephant Class Functions
Figure::Elephant::Elephant(int x, int y) : Position(x,y){}
int Figure::Elephant::checkElephant(int x, int y) {
    if(!onTrajectory(x,y))
        return 22;
    
}


//Figure::Queen Class Functions
Figure::Queen::Queen(int x, int y) : Elephant(x,y), Rook(x,y), Position(x,y){}
int Figure::Queen::checkQueen(int x, int y) {

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
            return pawn->checkPawn(x,y);
        case 5:
            return rook->checkRook(x,y);
        case 4:
            return horse->checkHorse(x,y);
        case 3:
            return elephant->checkElephant(x,y);
        case 2:
            return queen->checkQueen(x,y);
        case 1:
            return king->checkKing(x,y);

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
//
// Created by biostunt on 29.09.18.
//

#include "Figure.h"
#include "CodeStatement.h"
#include "ChessField.h"


//Figure::Position Class Functions
Figure::Position::Position(int x, int y,int size, ChessField *chessField){
    this->x = x;
    this->y = y;
    this->size = size;
    this->chessField = chessField;
}

//Figure::EmptySlot Class Functions
Figure::EmptySlot::EmptySlot(int x, int y,int size, ChessField *chessField) :
        Position(x, y,size,chessField){}

//Figure::Pawn Class Functions
Figure::Pawn::Pawn(int x,int y,int size, ChessField *chessField):
        Position(x,y,size,chessField){}
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
        if(chessField->getFigureId(x,y) == 0)
            return 10;
    }
    else
        return 20;
}
int Figure::Pawn::checkPawn(int x, int y){
    return checkStep(x,y) + checkAte(x,y);
}

//Figure::Horse Class Functions
Figure::Horse::Horse(int x, int y,int size, ChessField *chessField):
        Position(x,y,size,chessField) {}
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
Figure::Rook::Rook(int x, int y,int size, ChessField *chessField) :
        Position(x,y,size,chessField){}
int Figure::Rook::checkRook(int x, int y) {
    if(!onTrajectory(x,y))
        return 22;
    if(Horizontal)
        return checkHorizontal(x);
    if(Vertical)
        return checkVertical(y);
}
bool Figure::Rook::onTrajectory(int x, int y) {
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
        if(chessField->getFigureId(this->x,posY) != 0)
            return 31;
        posY++;
    }
    return 11;
}
int Figure::Rook::checkHorizontal(int x) {
    int posX = this->x + 1;
    while(posX < x){
        if(chessField->getFigureId(posX,this->y) != 0)
            return 31;
        posX++;
    }
    return 11;
}

//Figure::Elephant Class Functions
Figure::Elephant::Elephant(int x, int y,int size, ChessField *chessField) :
        Position(x,y,size,chessField){}
bool Figure::Elephant::onTrajectory(int x, int y) {
    int posX = this->x + 1;
    int posY = this->y + 1;
    while(posX <= size && posY <= size){
        if(posX == x && posY == y){
            RightUp = true;
            return true;
        }
        posX++;
        posY++;
    }
    posX = this->x - 1;
    posY = this->y - 1;
    while(posX >= 0 && posY >= 0){
        if(posX == x && posY == y){
            LeftDown = true;
            return true;
        }
        posX--;
        posY--;
    }
    posX = this->x - 1;
    posY = this->y + 1;
    while(posX >= 0 && posY <= size){
        if(posX == x && posY == y){
            LeftUp = true;
            return true;
        }
        posX --;
        posY ++;
    }
    posX = this->x + 1;
    posY = this->y - 1;
    while(posX <= size && posY >= 0){
        if(posX == x && posY == y){
            RightDown = true;
            return true;
        }
        posX ++;
        posY --;
    }
    return false;
}
int Figure::Elephant::checkElephant(int x, int y) {
    if(!onTrajectory(x,y))
        return 22;
    if(RightUp || LeftDown)
        return rightUpLeftDown(x,y);
    if(LeftUp || RightDown)
        return leftUpRightDown(x,y);
    return 22;
}
int Figure::Elephant::rightUpLeftDown(int x, int y) {

    if(RightUp){
        int posX = this->x + 1;
        int posY = this->y + 1;
        while(posX < x && posY < y){
            if( chessField->getFigureId(posX,posY)!= 0)
                return 31;
            posX++;
            posY++;
        }
    }
    if(LeftDown){
        int posX = this->x - 1;
        int posY = this->y - 1;
        while(posX > x && posY > y){
            if(chessField->getFigureId(posX,posY) != 0)
                return 31;
            posX--;
            posY--;
        }
    }
    return 11;
}
int Figure::Elephant::leftUpRightDown(int x, int y) {
    if(LeftUp){
        int posX = this->x - 1;
        int posY = this->y + 1;
        while(posX > x && posY < y){
            if(chessField->getFigureId(posX,posY) != 0)
                return 31;
            posX--;
            posY++;
        }
    }
    if(RightDown){
        int posX = this->x + 1;
        int posY = this->y - 1;
        while(posX < x && posY > y){
            if(chessField->getFigureId(posX,posY) != 0)
                return 31;
            posX ++;
            posY --;
        }
    }
    return 11;
}

//Figure::Queen Class Functions
Figure::Queen::Queen(int x, int y,int size, ChessField *chessField) :
        Elephant(x,y,size,chessField),
        Rook(x,y,size,chessField),
        Position(x,y,size,chessField){}

int Figure::Queen::checkQueen(int x, int y) {
    int checking = checkElephant(x,y);
    if(checking == 22)
        return checkRook(x,y);
    else
        return checking;
}

//Figure::King Class Functions
Figure::King::King(int x, int y,int size, ChessField *chessField):
        Pawn(x,y,size,chessField),
        Position(x,y,size,chessField){}
int Figure::King::checkKing(int x, int y) {
    if(checkAte(x,y) == 2) {
        if (this->x == x && (this->y + 1 == y || this->y - 1 == y))
            return 11;
        if (this->y == y && (this->x + 1 == x || this->x - 1 == x))
            return 11;
        return 22;
    } else
        return 11;

}

// Figure Class Functions
void Figure::initialize(int x, int y,int size, ChessField *chessField){
    switch(id){
        default:
            cout << "No id in case Figure::initialize" << endl;
        case 0:
            emptySlot = new EmptySlot(x,y,size,chessField);
        case 1:
            king = new King(x,y,size,chessField);
        case 2:
            queen = new Queen(x,y,size,chessField);
        case 3:
            elephant = new Elephant(x,y,size,chessField);
        case 4:
            horse = new Horse(x,y,size,chessField);
        case 5:
            rook = new Rook(x,y,size,chessField);
        case 6:
            pawn = new Pawn(x,y,size,chessField);
    }
}
int Figure::getCheckingCode(int id,int x, int y){
    switch(id){
        default:
            cout << "No id in case Figure::getCheckingCode" << endl;
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
Figure::Figure(ChessField *chessField,int id, int x, int y, int size){
    this->id = id;
    initialize(x, y,size,chessField);
}
void Figure::checkStatement(int id, int x, int y) {
        codeStatement->decode(id,getCheckingCode(id,x,y));
}
int Figure::getId() {
    return id;
}

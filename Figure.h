//
// Created by biostunt on 28.09.18.
//

#ifndef CHESSAPP_FIGURE_H
#define CHESSAPP_FIGURE_H

#include "ChessField.h"

class Figure{
private:
    // when user choose the Figure, this class gets unique id;
    // id0 = empty slot, id1 = king, id2 = queen, ......
    //
    int size;
    int id;

    class Position{
    public:
        Position(int x, int y){
            this->x = x;
            this->y = y;
        }
        int x;
        int y;
    };

    class EmptySlot : virtual Position{
    public:
        EmptySlot(int x, int y) : Position(x, y){}
    };

    class Rook : virtual Position{
    public:
        Rook(int x,int y) : Position(x,y){

        }
    };

    // пешка готова
    class Pawn : virtual Position{
    private:
        int checkAte(int x, int y){
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

        int checkStep(int x, int y){
            if(this->x == x && this->y + 1 == y)
                return 10;
            else
                return 20;
        }
    public:
        Pawn(int x, int y) : Position(x,y){

        }
        int checkingFunction(int x, int y){
            return checkStep(x,y) + checkAte(x,y);
        }
    };

    class Elephant : virtual Position{
    public:
        Elephant(int x, int y) : Position(x,y){}
    };

    class Horse : virtual Position{
    public:
        Horse(int x,int y) : Position(x,y){}
    };

    // король готов
    class King : Pawn, virtual Position {
    public:
        King(int x, int y) : Pawn(x,y), Position(x,y){}
    };

    class Queen : Elephant, Rook, virtual Position{
    public:
        Queen(int x,int y) : Elephant(x,y), Rook(x,y), Position(x,y){}
    };


    void initialize(int x, int y){
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

public:
    EmptySlot *emptySlot;
    King *king;
    Queen *queen;
    Elephant *elephant;
    Horse *horse;
    Rook *rook;
    Pawn *pawn;

    Figure(int id, int x, int y){
        this->id = id;
        initialize(x, y);
    }

    int checkStatement(int id, int x, int y){
        switch(id){

        }
    }


};



#endif //CHESSAPP_FIGURE_H

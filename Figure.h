//
// Created by biostunt on 28.09.18.
//

#ifndef CHESSAPP_FIGURE_H
#define CHESSAPP_FIGURE_H

class Figure{
private:
    // when user choose the Figure, this class gets unique id;
    // id0 = empty slot, id1 = king, id2 = queen, ......
    //
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

    class EmptySlot : Position{
    public:
        EmptySlot(int x, int y) : Position(x, y){}
    };

    class Peshka : Position{
        //Please Change name of this class on translated
    };

    class Elephant : Position{

    };

    class Horse : Position{

    };

    class King : Peshka, Position {

    };

    class Queen : Elephant, Horse, Position{

    };


    class RequireNode : Position{
        //this class will be for Node which we will be check
    };

    void initialize(int x, int y){
        switch(id){
            case 0:
                emptySlot = new EmptySlot(x,y);
        }
    }

public:
    EmptySlot *emptySlot;
    King *king;
    Queen *queen;
    Elephant *elephant;
    Horse *horse;
    Peshka *peshka;
    RequireNode *requireNode;

    Figure(int id, int x, int y){
        this->id = id;
        initialize(x, y);
    }


};



#endif //CHESSAPP_FIGURE_H

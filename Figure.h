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
        int x;
        int y;
    };

    class King : Peshka, Position {

    };
    class Queen : Elephant, Horse, Position{

    };
    class Elephant, Position{

    };
    class Horse, Position{

    };
    class Peshka : Position{
        //Please Change name of this class on translated
         };



};



#endif //CHESSAPP_FIGURE_H

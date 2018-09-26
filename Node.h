//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_NODE_H
#define CHESSAPP_NODE_H


// Класс будет служить для ячейки в поле,
// а также этот класс будет унаследован всеми фигурами для обозначения позиции

class Node{
public:
    int x;
    int y;
    Node(int x, int y){
        this->y = y;
        this->x = x;
    }
};

#endif //CHESSAPP_NODE_H

//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H

#include "Node.h"



class ChessField{
private:
    int size;
    void initialize() {

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

};



#endif //CHESSAPP_CHESSFIELD_H

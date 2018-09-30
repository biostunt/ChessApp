//
// Created by biostunt on 30.09.18.
//

#ifndef CHESSAPP_FIELDCONTAINER_H
#define CHESSAPP_FIELDCONTAINER_H

class FieldContainer {
public:
    ChessField *chessField;
    FieldContainer(ChessField *chessField){
        this->chessField = chessField;
    }
    Figure* getFigure(int x, int y){
        return chessField->getFigure(x,y);
    }
};


#endif //CHESSAPP_FIELDCONTAINER_H

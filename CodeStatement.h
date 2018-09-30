//
// Created by biostunt on 30.09.18.
//

#ifndef CHESSAPP_CODESTATEMENT_H
#define CHESSAPP_CODESTATEMENT_H

#include "Interface.h"
#include <iostream>
using namespace std;



class CodeStatement {
private:
    Interface *anInterface = new Interface();
public:
    CodeStatement(){}
    void decode(int id, int code){
        anInterface->getFigureText(id);
        anInterface->getCodeText(code);
    }
};


#endif //CHESSAPP_CODESTATEMENT_H

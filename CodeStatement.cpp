//
// Created by biostunt on 30.09.18.
//

#include "CodeStatement.h"


CodeStatement::CodeStatement() {}
void CodeStatement::decode(int id, int code){
    anInterface->getFigureById(id);
    anInterface->getCodeText(code);
}

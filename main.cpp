
#include <iostream>
#include "ChessField.h"
#include "Figure.h"
#include "Interface.h"

Interface *anInterface = new Interface();
int reqX, reqY;


void getFigures(ChessField *chessField){
    bool isReady = false;
    int choose;
    int x,y;
    while(!isReady){
        try{
            anInterface->getInterfaceText(1);
            cin >> choose;
            if(choose != 0){
                anInterface->getInterfaceText(2);
                anInterface->getInterfaceText(9);
                cin >> x;
                anInterface->getInterfaceText(6);
                cin >> y;
                chessField->add(chessField,choose, x, y);
            } else
                isReady = true;
        } catch(...){
            //Exception!!!!!!!!
            cout << "Ошибка при добавлении фигуры" << endl;
        }
    }
}

void getRequireNode(){
    try{
        anInterface->getInterfaceText(3);
        anInterface->getInterfaceText(9);
        cin >> reqX;
        anInterface->getInterfaceText(6);
        cin >> reqY;
    } catch (...){
        //Exception !!!!!!!!!!!!!!!!
        cout << "Ошибка при написании кординат ячейки для проверки" << endl;
    }
}
void checkConstruct(){
    ChessField *chessField = new ChessField(fieldSize);
    getFigures(chessField);

    //kk


    //checking
    chessField->startChecking(reqX,reqY);
}

int main(){
    checkConstruct();
}
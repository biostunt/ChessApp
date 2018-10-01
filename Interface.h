//
// Created by biostunt on 28.09.18.
//

#include <iostream>
using namespace std;


#ifndef CHESSAPP_INTERFACE_H
#define CHESSAPP_INTERFACE_H


class Interface{
public:
    Interface();

    void getInterfaceText(int point);
    void getCodeText(int point);
    void getFigureById(int id);
};

#endif //CHESSAPP_INTERFACE_H

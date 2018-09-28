//
// Created by biostunt on 28.09.18.
//

#include <iostream>
using namespace std;


#ifndef CHESSAPP_INTERFACE_H
#define CHESSAPP_INTERFACE_H


class Interface{
public:
    Interface(){}
    void getText(int point){
        switch(point){
            case 0:
                cout << "Введите размер полного поля: ";
            case 1:
                cout << "0. Закончить" << endl;
                cout << "Какую фигуру добавить?" << endl;
                cout << "1. Король" << endl;
                cout << "2. Королева" << endl;
                cout << "3. Слон" << endl;
                cout << "4. Конь" << endl;
                cout << "5. Ладья" << endl;
                cout << "6. Пешка" << endl;
            case 2:
                cout << "Введите координаты фигуры: ";
            case 3:
                cout << "Введите координаты ячейки для проверки";

        }
    }
};

#endif //CHESSAPP_INTERFACE_H

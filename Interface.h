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
                cout << "Какую фигуру добавить?" << endl;
                cout << "0. Закончить" << endl;
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
    void getCodeText(int point){
        switch(point){
            case 1:
                cout << "не может переместиться или съесть из-за препятствия\n";
            case 2:
                cout << "может переместиться или сьесть фигуру в заданной точке\n";
        }
    }
    void getFigureText(int id){
        switch(id){
            case 1:
                cout << "Король ";
            case 2:
                cout << "Королева ";
            case 3:
                cout << "Слон ";
            case 4:
                cout << "Конь ";
            case 5:
                cout << "Ладья ";
            case 6:
                cout << "Пешка ";
        }
    }
};

#endif //CHESSAPP_INTERFACE_H

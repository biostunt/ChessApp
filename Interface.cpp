//
// Created by biostunt on 01.10.18.
//

#include "Interface.h"

Interface::Interface() {}
void Interface::getInterfaceText(int point){
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
void Interface::getCodeText(int point){
    switch(point){
        case 22:
            cout << "не может переместиться или съесть\n";
        case 11:
            cout << "может переместиться или сьесть фигуру в заданной точке\n";
        case 21:
            cout << "не может переместиться, но может съесть фигуру\n";
        case 12:
            cout << "может переместиться, но не может съесть фигуру\n";
    }
}
void Interface::getFigureById(int id){
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



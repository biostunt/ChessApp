#include <iostream>
#include "Node.h"
using namespace std;

void interface(int x){
    switch(x){
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

void addingParameters(){
    interface(0);
    bool isReady = false;
    while(!isReady){
        int tmpCount;
        interface(1);
        cin >> tmpCount;

    }
}

class P{
public:
    int x;
    P(int x){this->x = x;}
};

int main() {
    P *p = new P(4);
    int x = p;
}
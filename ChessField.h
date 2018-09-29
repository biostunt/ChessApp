//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H


#include <iostream>
using namespace std;

class ChessField{
private:
    int size;
    const int M, N =8;
    void initialize() {  
	int **Field = new int* [N];  
  for (int i = 0; i < N; i++) {       
    Field [i]= new int [M]; 
  }   
  for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
           Field[i][j]= new Field(0);

   	for (int i = 0; i < n; i++) {
    delete [] Field[i];  
  } }
public:
    ChessField(int size){
        this->size = size;
        initialize();
    }
    ChessField(){
        this->size = 8;
        initialize();
    }
    int getSize(){
        return size;
    }

};

#endif //CHESSAPP_CHESSFIELD_H

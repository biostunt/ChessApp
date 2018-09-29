//
// Created by biostunt on 26.09.18.
//

#ifndef CHESSAPP_CHESSFIELD_H
#define CHESSAPP_CHESSFIELD_H
#include <iostream>
#include "Figure.h"
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
           {
		
        	Pawn[i][j]= new Pawn(0);
        	King [i][j]= new King(0);
    		Queen [i][j]= new Queen(0);
    		Elephant [i][j]= new Elephant(0);
    		Horse [i][j]= new Horse(0);
    		Rook [i][j]= new Rook(0);
         }  

   	for (int i = 0; i < N; i++) {
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

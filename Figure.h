//
// Created by biostunt on 29.09.18.
//





#ifndef CHESSAPP_FIGURE_H
#define CHESSAPP_FIGURE_H

#include "CodeStatement.h"
#include "ChessField.h"
class ChessField;
class Figure {

private:
    int id;

    CodeStatement *codeStatement = new CodeStatement();
    // готово
    class Position{
    public:
        int x;
        int y;
        int size;
        ChessField *chessField;
        Position(int x, int y,int size, ChessField *chessField);

    };
    class EmptySlot : virtual Position{
    public:
        EmptySlot(int x, int y,int size, ChessField *chessField);
    };
    class Pawn : virtual Position{
    public:
        Pawn(int x, int y,int size, ChessField *chessField);
        int checkPawn(int x, int y);
        int checkAte(int x, int y);
        int checkStep(int x, int y);
    };
    class Horse : virtual Position{
    public:
        Horse(int x,int y,int size, ChessField *chessField);
        int checkHorse(int x, int y);
    };
    class Rook : virtual Position{
    private:
        bool Vertical = false;
        bool Horizontal = false;
    public:
        bool onTrajectory(int x, int y);
        int checkHorizontal(int x);
        int checkVertical(int y);
        Rook(int x,int y,int size, ChessField *chessField);
        int checkRook(int x, int y);
    };
    class Elephant : virtual Position{
    private:
        bool RightUp = false;
        bool LeftDown = false;
        bool LeftUp = false;
        bool RightDown = false;
    public:
        bool onTrajectory(int x, int y);
        int rightUpLeftDown(int x, int y);
        int leftUpRightDown(int x, int y);
        Elephant(int x, int y,int size, ChessField *chessField);
        int checkElephant(int x, int y);
    };
    class Queen : Elephant, Rook, virtual Position{
    public:
        Queen(int x,int y,int size, ChessField *chessField);
        int checkQueen(int x, int y);
    };
    class King : Pawn ,virtual Position {
    public:
        King(int x, int y,int size, ChessField *chessField);
        int checkKing(int x, int y);
    };

    void initialize(int x, int y,int size,ChessField *chessField);
    int getCheckingCode(int id,int x, int y);


public:

    EmptySlot *emptySlot;
    King *king;
    Queen *queen;
    Elephant *elephant;
    Horse *horse;
    Rook *rook;
    Pawn *pawn;
    Figure(ChessField *chessField,int id, int x, int y,int size);
    void checkStatement(int id, int x, int y);
    int getId();

};


#endif //CHESSAPP_FIGURE_H

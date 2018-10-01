//
// Created by biostunt on 29.09.18.
//





#ifndef CHESSAPP_FIGURE_H
#define CHESSAPP_FIGURE_H

#include "CodeStatement.h"
class ChessField;
class Figure {
private:
    int id;
    // готово

    class Position{
    public:
        int x;
        int y;
        Position(int x, int y);

    };
    class EmptySlot : virtual Position{
    public:
        EmptySlot(int x, int y);
    };
    class Pawn : virtual Position{
    private:
        int checkAte(int x, int y);
        int checkStep(int x, int y);
    public:
        Pawn(int x, int y) : Position(x,y){}
        int checkPawn(int x, int y);
    };
    class Horse : virtual Position{
    public:
        Horse(int x,int y);
        int checkHorse(int x, int y);
    };
    class Rook : virtual Position{
    private:
        bool Vertical = false;
        bool Horizontal = false;
        bool onTrajectory(int x, int y);
        int checkHorizontal(int x);
        int checkVertical(int y);
    public:
        Rook(int x,int y);;
        int checkRook(int x, int y);
    };
    // не готово
    class Elephant : virtual Position{
    private:
        bool onTrajectory(int x, int y);
        int RightUpLeftDown(int x, int y);
        int LeftUpRightDown(int x, int y);
    public:
        Elephant(int x, int y);
        int checkElephant(int x, int y);
    };
    class Queen : Elephant, Rook, virtual Position{
    public:
        Queen(int x,int y);
        int checkQueen(int x, int y);
    };
    class King : Pawn, virtual Position {
    public:
        King(int x, int y);
        int checkKing(int x, int y);
    };

    void initialize(int x, int y);
    int getCheckingCode(int id,int x, int y);


public:
    static ChessField* chessField;
    CodeStatement *codeStatement = new CodeStatement();
    EmptySlot *emptySlot;
    King *king;
    Queen *queen;
    Elephant *elephant;
    Horse *horse;
    Rook *rook;
    Pawn *pawn;

    Figure(int id, int x, int y);
    void checkStatement(int id, int x, int y);
    void setSize(int size);
    int getId();
    void setField(ChessField *chessField1);
};


#endif //CHESSAPP_FIGURE_H

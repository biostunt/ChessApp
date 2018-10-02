#include <iostream>
using namespace std;

class ExcPlaceTaken(int x, int y) {
  if (chessField[x][y]->getId() != 0) {
    cout << "Choose new position: " << endl;
    cin >> x >> y;
    };
    
class ExcOutOfPole() {
 if ((x > this->size) || (y > this->size)) {
  cout << "Out of pole. Choose new coord:  " << endl;
  cin >> x >> y;
  
  };
  
class WrongInput(int k) {
	while(!(cin>>k) || cin.get() != '\n') {
		cout<<"Enter again!! \n";
		cin.clear();
		cin.sync();
		cout << "Enter again: " << endl;
	}
  
  };

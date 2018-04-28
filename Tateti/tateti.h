#ifndef _TATETI_H_
#define _TATETI_H_

#include <vector>
#include <iostream>
#include <random>
using namespace std;

enum MODE { PVP, PVC };

class Tateti {

public:
		//Constructors
		Tateti();
		Tateti(MODE m);
		~Tateti();

		//Methods
		bool gameOver();
		bool notAValidMove(int x, int y);
		bool getActualPlayer();

		char getSlotValue(int x, int y);
		
		void initGame();
		void printGame();
		void setSlot(int x, int y);


	private: 
		vector<vector<char> > table;
		bool actualPlayer;
		bool hayDiagonal();
		bool hayColumna(int x);
		bool hayFila(int y);
		MODE mode;

		bool getPlayer1();

};
#endif

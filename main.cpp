#include <iostream>

#include <textbaduk2.h> 
#include "BoardGUI.cpp"

using namespace std;

int main(void)
{
	PBoard* testBoard = new PBoard(18);
	int row, column;
	bool running = true;
	bool safe = false;

	while(running)
	{
		testBoard->printBoard();
		do{
			cin >> row;	
			if (row == 'e')
				running = false;
			cin >> column;	
			safe = testBoard->placeStone(row,column);
		} while(safe == false);
		testBoard->checkAllCaps();
		testBoard->changePlayer();
	}

	return 0;
}

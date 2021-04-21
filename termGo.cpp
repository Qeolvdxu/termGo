#include <iostream>

#include "./textbaduk2/include/Board.hpp"

using namespace std;

int main(void)
{
	Board* testBoard = new Board(18);
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

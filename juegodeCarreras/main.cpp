#include <iostream>
#define CASILLAS_TOTALES 50

enum  PlayerTurn
{
	PLAYER_1,
	PLAYER_2,
};


int main() {

	char tablero[CASILLAS_TOTALES];

	bool GameOver = false;
	PlayerTurn playerTurn = PLAYER_1;

	while (!GameOver)
	{
		playerTurn = playerTurn == PLAYER_1 ? PLAYER_2 : PLAYER_1;

	}

	std::cout << "Hello World!";
	return 0;
}
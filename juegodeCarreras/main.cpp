#include <iostream>
#define CASILLAS_TOTALES 50
#include <ctime>
#include <cstdlib>

enum  PlayerTurn
{
	PLAYER_1,
	PLAYER_2,
};





int main() {


	srand(time(NULL));

	int dado = 1 + rand() % 6;

	std::cout <<"Dado: " << dado << std::endl;

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
#include <iostream>
#define CASILLAS_TOTALES 30
#define CARAS_DADO 6
#include <ctime>
#include <cstdlib>

enum  PlayerTurn
{
	PLAYER_1,
	PLAYER_2,
};

int pos1 = 0;
int pos2 = 0;


int main() {


	srand(time(NULL));

	int dado = 1 + rand() % 6;

	std::cout <<"Dado: " << dado << std::endl;

	char tablero[CASILLAS_TOTALES];

	for (int i = 0; i < CASILLAS_TOTALES; i++)
	{
		std::cout << tablero[i] << "[ ]";
		
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for ( int j = 0; j < CASILLAS_TOTALES; j++)
	{
		std::cout << tablero[j] << "[ ]";
	}
	

	bool GameOver = false;
	PlayerTurn playerTurn = PLAYER_1;

	while (!GameOver)
	{
		playerTurn = playerTurn == PLAYER_1 ? PLAYER_2 : PLAYER_1;

	}


	return 0;
}
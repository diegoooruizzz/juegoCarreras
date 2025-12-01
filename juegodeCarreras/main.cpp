#include <iostream>
#define CASILLAS_TOTALES 50
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

	bool GameOver = false;
	PlayerTurn playerTurn = PLAYER_1;

	while (!GameOver)
	{
		playerTurn = playerTurn == PLAYER_1 ? PLAYER_2 : PLAYER_1;

	}


	int lanzarDado(int carasDado = CARAS_DADO) {

		return 1 + rand() % carasDado;

	}

	void imprimirtablero(tablero[CASILLAS_TOTALES], int pos1, int pos2) {

		for (int i = 0; i < CASILLAS_TOTALES; i++)
		{
			std::cout << "*" << ;
		}

	}

	imprimirtablero(tablero, pos1, pos2);


	return 0;
}
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "Map.h"
#include "Player.h"

enum class GameState { PLAYING, QUIT, OPTIONS };

class Game
{
public:
	Game();
	~Game();

	void init();

	void update();

	int input();

private:
	void main();

	void optionMenu();

	GameState state;
	GameState subState;
	Player player;
	Map map;
};

#endif //GAME_H


#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "Map.h"
#include "Player.h"

class Game
{
public:
	Game();
	~Game();

	void init();

	void update();

private:
	Player player;
	Map map;
};

#endif //GAME_H


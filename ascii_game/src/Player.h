#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <conio.h>

#include "Map.h"

class Player
{
public:
	Player();
	~Player();

	void update(Map map);
	int getInput();

private:
	int m_x;
	int m_y;

};

#endif //PLAYER_H
#include "Game.h"



Game::Game()
{
}


Game::~Game()
{
}

void Game::init()
{
	map.init();

	update();
}

void Game::update()
{
	player.update(map);
}

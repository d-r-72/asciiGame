#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::init()
{
	map.init("map.txt");
	state = GameState::PLAYING;

	main();
}

void Game::update()
{
	map.update();
	player.update(map, input());
}

void Game::main()
{
	while (state == GameState::PLAYING)
	{
		update();
		if (subState == GameState::OPTIONS)
			optionMenu();
	}
}

void Game::optionMenu()
{
	std::cout << std::string(100, '\n');
	printf("1. Add Tree\n");
	printf("2. Add Door\n");

	int t = _getch();

	switch (t)
	{
	case '1':
		map.add(Object::TREE, 5, 4);
		break;

	default:
		break;
	}
	subState = GameState::PLAYING;
}

int Game::input()
{
	int result;

	printf("Please enter a movement command W.A.S.D\n Q to quit, or O for options: ");
	char k = _getch();
	std::cout << std::endl;

	switch (k)
	{
	case 'w':
	case 'W':
		result = 1;
		break;

	case 'a':
	case 'A':
		result = 2;
		break;

	case 's':
	case 'S':
		result = 3;
		break;

	case 'd':
	case 'D':
		result = 4;
		break;

	case 'q':
	case 'Q':
		return 5;

	case 'o':
	case 'O':
		subState = GameState::OPTIONS;
		return 7;

	default:
		return 6;
	}
	return result;
}

#include "Player.h"



Player::Player()
{
	m_x = 0;
	m_y = 0;
}


Player::~Player()
{
}

void Player::update(Map map)
{
	bool done = false;
	while (done == false)
	{
		int dir = getInput();

		if (dir == 1)
		{

		}
		else if (dir == 2)
		{

		}
		else if (dir == 3)
		{

		}
		else if (dir == 4)
		{

		}
		else if (dir == 5)
			break;
		else if (dir == 6)
			std::cout << "invalid input\n";
	}
}

int Player::getInput()
{
	printf("Please enter a movement command W.A.S.D or Q to quit: ");
	char k = _getch();
	std::cout << std::endl;

	switch (k)
	{
	case 'w':
	case 'W':
		return 1;
		break;

	case 'a':
	case 'A':
		return 2;
		break;

	case 's':
	case 'S':
		return 3;
		break;

	case 'd':
	case 'D':
		return 4;
		break;

	case 'q':
	case 'Q':
		return 5;

	default:
		return 6;
	}

}

#include "Player.h"



Player::Player()
{
	m_x = 0;
	m_y = 0;
}

Player::~Player()
{
}

void Player::update(Map &map, int dir)
{
	bool done = false;
	while (done == false)
	{
		if (dir == 1)
		{
			map.setTile(m_x - 1, m_y, '@');
			map.setTile(m_x, m_y, cons::CUT_GRASS);
			m_x -= 1;
			done = true;
		}
		else if (dir == 2)
		{
			map.setTile(m_x, m_y - 1, '@');
			map.setTile(m_x, m_y, cons::CUT_GRASS);
			m_y -= 1;
			done = true;
		}
		else if (dir == 3)
		{
			map.setTile(m_x + 1, m_y, '@');
			map.setTile(m_x, m_y, cons::CUT_GRASS);
			m_x += 1;
			done = true;
		}
		else if (dir == 4)
		{
			map.setTile(m_x, m_y + 1, '@');
			map.setTile(m_x, m_y, cons::CUT_GRASS);
			m_y += 1;
			done = true;
		}
		else if (dir == 5)
			break;
		else if (dir == 6)
			break;
		else if (dir == 7)
			break;
	}
}


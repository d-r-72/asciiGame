#include "Map.h"

Map::Map()
{
	color.setColorWhite();
}

Map::~Map()
{
}

void Map::add(Object obj, int x, int y)
{
	switch (obj)
	{
	case DOOR:
		break;

	case Object::TREE:
		m_map[x - 1][y] = '*';
		m_map[x][y] = '|';
		break;

	default:
		break;
	}
}

void Map::init()
{
	for (int i = 0; i < cons::SIZE; i++)
	{
		for (int j = 0; j < cons::SIZE; j++)
		{
			m_map[i][j] = cons::GRASS;
		}
	}
}

void Map::print()
{
	std::cout << std::endl;
	for (int i = 0; i < cons::SIZE; i++)
	{
		for (int j = 0; j < cons::SIZE; j++)
		{
			switch (m_map[i][j])
			{
			case '*':
				color.setColorGreen();
				std::cout << "   " << m_map[i][j];
				color.setColorWhite();
				break;

			default:
				std::cout << "   " << m_map[i][j];
			}
		}
		std::cout << "\n";
	}
}

void Map::update()
{
	std::cout << std::string(100, '\n');
	print();
}

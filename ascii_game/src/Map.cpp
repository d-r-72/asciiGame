#include "Map.h"



Map::Map()
{
}


Map::~Map()
{
}

void Map::init()
{
	for (int i = 0; i < cons::SIZE; i++)
	{
		for (int j = 0; j < cons::SIZE; j++)
		{
			m_map[i][j] = '#';
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
			std::cout << " | " << m_map[i][j];
		}
		std::cout << "\n\n";
	}
}

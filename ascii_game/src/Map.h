#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "constants.h"

enum Object { TREE, DOOR };

class Map
{
public:
	Map();
	~Map();

	void init();

	void print();

	void setTile(int x, int y, char symbol) { m_map[y][x] = symbol; }

	char getTile(int x, int y) { return m_map[y][x]; }

private:

	char m_map[cons::SIZE][cons::SIZE];
};

#endif //MAP_H


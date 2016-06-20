#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "Color.h"
#include "constants.h"

enum Object { TREE, DOOR };

class Map
{
public:
	Map();
	~Map();

	void init();

	void print();

	void update();

	void add(Object obj, int x, int y);

	void setTile(int x, int y, char symbol) { m_map[x][y] = symbol; }

	char getTile(int x, int y) { return m_map[y][x]; }

private:

	Color color;
	char m_map[cons::SIZE][cons::SIZE];
};

#endif //MAP_H


#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

#include "Color.h"
#include "constants.h"

enum Object { TREE, DOOR };

class Map
{
public:
	Map();
	~Map();

	void init(std::string filename);

	void print();

	void update();

	void add(Object obj, int x, int y);

	void setTile(int x, int y, char symbol) { map[x][y] = symbol; }

	char getTile(int x, int y) { return map[y][x]; }

private:

	Color color;
	std::vector<std::string> map;
};

#endif //MAP_H


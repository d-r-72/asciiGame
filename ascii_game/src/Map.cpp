#include "Map.h"

Map::Map()
{
	color.setColorWhite();
}

Map::~Map()
{
	std::string editedName;
	editedName = _fileName;
	editedName.append("1");

	std::ofstream out(editedName);

	for (int i = 0; i < map.size(); i++)
	{
		out << map[i] << std::endl;
	}

}

void Map::add(Object obj, int x, int y)
{
	switch (obj)
	{
	case DOOR:
		break;

	case Object::TREE:
		map[x - 1][y] = '*';
		map[x][y] = '|';
		break;

	default:
		break;
	}
}

void Map::init(std::string filename)
{
	_fileName = filename;
	std::ifstream in;

	in.open(filename);

	if (in.fail())
	{
		std::perror(filename.c_str());
		exit(1);
	}

	std::string line;

	while (getline(in, line))
	{
		map.push_back(line);
	}

	in.close();
}

void Map::print()
{
	for (int i = 0; i < map.size(); i++)
	{
		printf("%s\n", map[i].c_str());
	}
}

void Map::update()
{
	system("cls");
	print();
}

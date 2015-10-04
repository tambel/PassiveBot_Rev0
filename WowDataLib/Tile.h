#pragma once 
#include "FileParser.h"
#include "Utils.h"
#include "Adt.h"
#include "Block.h"
#include "WMO.h"
#include "MapObject.h"
#define PATH "E:\\Extracted\\"
#define TERRAIN_PATH "World\\Maps\\"
//#define TERRAIN_PATH "C:\\Users\\laptop\\Desktop\\Extracted\\World\\Maps\\"
//#define WMO_PATH "C:\\Users\\laptop\\Desktop\\Extracted\\World\\Wmo\\"
#define WMO_PATH "World\\Wmo\\"
class Tile
{
protected:
	Point2D coords;
public:
	vector<MapObject*> map_objects; 
	Block * blocks[16][16];
	Vector3 position;
	bool exists;
	Tile();
	Tile(int x,int y);
	~Tile(void);

	void SetPosition(Vector3 position);
};
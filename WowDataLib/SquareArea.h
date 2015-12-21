#pragma once
#include "Utils.h"
#include "ADTWorker.h"
#include "MapArea.h"
#include "WowLib\WowObject.h"
#include "WowObjectAvatar.h"
using namespace Utils;
using namespace Utils::Game;
struct ChunkInfo
{
	Location * location;
	Point2D<int> block_coordinates;
	Point2D<int> coordinates;
	Vector3 position;
	ChunkInfo();
	ChunkInfo(	Location * location, Point2D<int> block_coordinates,Point2D<int> coordinates,int radius);//:location(location),block_coordinates(block_coordinates),coordinates(coordinates){}
};
class SquareArea: public MapArea
{
	
	//Chunk *** chunks;
	//Chunk ***chunks;
	Chunk * chunks2[21][21];
	int radius;
	Location * location;
	Point2D<int> block_coordinates;
	Point2D<int> coordinates;
	vector<Doodad*> doodads;
	vector<Doodad*> old_doodads;
	vector<Doodad*> active_doodads;
	vector<Model*> additional_objects;
	vector<WowObjectAvatar*> wow_object_avatars;
	BoundingBox bounding_box;

public:
	bool to_update;
	SquareArea(Location * location, Point2D<int> block_coordinates,Point2D<int> coordinates,int radius);
	~SquareArea(void);
	void Fill(Location * location, Point2D<int> block_coordinates,Point2D<int> coordinates);
	void Move(Location * location, Point2D<int> block_coordinates,Point2D<int> coordinates);
	int GetRadius() {return radius;}
	void InitObjects();
	vector<Doodad*> * GetDoodads() {return &doodads;}
	vector<Doodad*> * GetActiveDoodas() {return &active_doodads;}
	vector<WowObjectAvatar*> * GetWowAvatars() {return &wow_object_avatars;}
	void AddWowObjectAvatar(Wow::WowObject* object);
	void UpdateWowObjects();
};

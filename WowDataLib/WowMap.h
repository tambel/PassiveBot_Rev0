#pragma once
#include "Tile.h"
#include "Adt.h"
#include "Utils.h"
#include <vector>
#include "DynamicObject.h"
using namespace std;
//using namespace Utils::;

class WowMap
{
	
protected:
	Vector3 position;
	
	
public:
	Tile * tiles[3][3];
	vector<Renderable*> objects;
	WowMap(Vector3 position);
	~WowMap(void);
	void SetPosition(Vector3 position);
	void GoToPlace(Vector3 coords);

	
	void Draw();

};

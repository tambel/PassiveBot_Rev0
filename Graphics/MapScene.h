#pragma once
#include <OgreSceneManager.h>
#include "WowDataLib\WowMap.h"
#include "TileScene.h"
using namespace std;


class MapScene:public Scene
{
	WowMap * map;
	
public:
	vector<MapEntityScene*> dynamic_objects; 
	MapScene(WowMap * map,Ogre::SceneNode * ps);
	~MapScene(void);
	void SetMap(WowMap * map,Ogre::SceneNode * ps);
	void AddMapEntityScene(DynamicObject * dyn_obj);
	void RemoveMapEntityScene(DynamicObject * dyn_obj);
};


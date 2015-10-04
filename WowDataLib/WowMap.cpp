#pragma once
#include "WowMap.h"

WowMap::WowMap(Vector3 position)
{
	int x=floor((32 - (position.x / TILE_LENGTH)));
	int y=floor((32 - (position.y / TILE_LENGTH)));
	x=34;
	y=50;
	//tiles[0][0]=new Tile(x-1,y-1);
	//tiles[0][1]=new Tile(x-1,y);
	//tiles[0][2]=new Tile(x-1,y+1);
	//tiles[1][0]=new Tile(x,y-1);
	tiles[1][1]=new Tile(x,y);
	//tiles[1][2]=new Tile(x,y+1);
	//tiles[2][0]=new Tile(x+1,y-1);
	//tiles[2][1]=new Tile(x+1,y);
	//tiles[2][2]=new Tile(x+1,y+1);
}
WowMap::~WowMap(void)
{
}
void WowMap::SetPosition(Vector3 position)
{
	this->position=position;
}
void  WowMap::GoToPlace(Vector3 position)
{
	

} 




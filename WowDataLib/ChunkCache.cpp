#include "ChunkCache.h"

Chunk * ChunkCache::Find(Location * location, Point2D<int> block_coordinates, Point2D<int>coordinates)
{
	for (auto chunk:item_list)
	{
		if (chunk->GetLocation()->id==location->id && chunk->GetBlockCoordinates()==block_coordinates && chunk->GetCoordinates()==coordinates)
		{
			return chunk;
		}
	}
	return 0;
}

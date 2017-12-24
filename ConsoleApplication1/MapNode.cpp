#include "stdafx.h"

#include "MapNode.h"

MapNode::MapNode()
{
	next = NULL;
	key = 0;
	data = 0;
}

MapNode::MapNode(int key, int data)
{
	next = NULL;
	this->key = key;
	this->data = data;
}

MapNode::~MapNode()
{
}

MapNode * MapNode::GetNext()
{
	return next;
}

void MapNode::SetNext(MapNode * node)
{
	next = node;
}

int MapNode::GetData()
{
	return data;
}

void MapNode::SetData(int value)
{
	data = value;
}

int MapNode::GetKey(void)
{
	return key;
}

void MapNode::SetKey(int value)
{
	key = value;
}
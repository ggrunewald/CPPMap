#pragma once

#include "MapNode.h"

class Map
{
private:
	MapNode * head;

	int size;

public:
	Map();
	~Map();

	void Insert(int key, int data);
	
	void Remove(int key);
	void Remove(MapNode * node);
	void Clear();

	MapNode * GetNode(int key);
	int GetValue(int key);
	MapNode * FindKey(int data);

	bool IsEmpty();
	int Size();

	void Print(void);

	void SwapNodes(int a, int b);
	void SwapValues(int a, int b);
};


#pragma once

class MapNode
{
private:
	MapNode * next;
	int key;
	int data;
public:
	MapNode();
	MapNode(int key, int data);
	~MapNode();

	inline MapNode * GetNext();
	inline void SetNext(MapNode * node);

	inline int GetData();
	inline void SetData(int value);

	inline int GetKey(void);
	inline void SetKey(int value);
};


#include "stdafx.h"

#include "Map.h"

#include <iostream>

using namespace std;

Map::Map()
{
	size = 0;
}


Map::~Map()
{
}

//inserts a new pair in the right place in a ordered way according to node's keys
void Map::Insert(int key, int data)
{
	//if empty
	if (size == 0)
	{
		MapNode * newNode = new MapNode(key, data);
		
		//inserted node is the head
		head = newNode;
	}
	else
	{
		MapNode * prevNode = NULL;
		MapNode * currNode = head;

		//looks for new node place on map (always insert ordered)
		while (currNode != NULL && currNode->GetKey() < key)
		{
			prevNode = currNode;
			currNode = prevNode->GetNext();
		}

		//insert new node at the right place
		MapNode * newNode = new MapNode(key, data);

		//if new node's key is smaller then the first one
		if (prevNode == NULL)
		{
			//inserted node is the head
			head = newNode;

			newNode->SetNext(currNode);
		}
		else
		{
			//inserts new node between prevNode and currNode
			prevNode->SetNext(newNode);
			newNode->SetNext(currNode);
		}
	}
	
	//increases size counter
	size++;
}

//removes the node with the specified key
void Map::Remove(int key)
{
	size--;

	//to be continued...
}

//removes the node
void Map::Remove(MapNode * node)
{
	size--;

	//to be continued...
}

//removes all the nodes form the map (frees memory)
void Map::Clear()
{
	size = 0;

	//to be continued...
}

//returns node with the specified key
MapNode * Map::GetNode(int key)
{
	return NULL;
}

//returns the value of the node with the specified key
int Map::GetValue(int key)
{
	return -1;
}

//returns first node's key with the specified data
MapNode * Map::FindKey(int data)
{
	return NULL;
}

bool Map::IsEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}

int Map::Size()
{
	return size;
}

//prints all the data contained by the map
void Map::Print(void)
{
	MapNode * currNode = head;

	//go through all the map getting node's data and printing
	while (currNode != NULL)
	{
		cout << currNode->GetData() << " ";

		currNode = currNode->GetNext();
	}
	
	cout << endl;
}

//swap nodes itselves given their keys
void Map::SwapNodes(int a, int b)
{
}

//swap values inside nodes given their keys
void Map::SwapValues(int a, int b)
{
	MapNode *nodeA = NULL, *nodeB = NULL;

	MapNode * currNode = head;

	//go through all the map looking for nodes with keys a and b
	while (currNode != NULL)
	{
		if (currNode->GetKey() == a)
			nodeA = currNode;

		if (currNode->GetKey() == b)
			nodeB = currNode;

		currNode = currNode->GetNext();
	}

	//swap nodes content if both not null
	if (nodeA == NULL || nodeB == NULL)
		return;

	int temp = nodeA->GetData();

	nodeA->SetData(nodeB->GetData);
	nodeB->SetData(temp);
}
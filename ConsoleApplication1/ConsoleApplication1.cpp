#include "stdafx.h"

#include <iostream>

#include "Map.h"

using namespace std;

int main()
{
	Map * myMap = new Map();

	//inserting some nodes
	myMap->Insert(3, 3);

	myMap->Insert(4, 4);

	myMap->Insert(5, 5);

	myMap->Insert(1, 1);

	myMap->Insert(2, 2);

	//printing maps size
	cout << "Map size = " << myMap->Size() << endl;
	
	//printing maps data
	myMap->Print();
	
	//getting node and data by key
	int i = 3;

	int data = myMap->GetData(i);

	if(data != -1)
		cout << "Map's 1st element = " << data << endl;
	
	MapNode * node = myMap->GetNode(i);

	if(node != NULL)
		cout << "Map's 1st element = " << node->GetData() << endl;
	
	cin >> i;

	return 0;
}


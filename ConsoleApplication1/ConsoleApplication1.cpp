#include "stdafx.h"

#include <iostream>

#include "Map.h"

using namespace std;

int main()
{
	Map * myMap = new Map();

	myMap->Insert(3, 3);

	myMap->Insert(4, 4);

	myMap->Insert(5, 5);

	myMap->Insert(1, 1);

	myMap->Insert(2, 2);

	cout << "Map size = " << myMap->Size() << endl;
	
	myMap->Print();

	int x;

	cin >> x;

	return 0;
}


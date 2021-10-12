#include <iostream>
#include <string>
using namespace std;

int main()
{
	int const SINGLE_ROOM = 60, DOUBLE_ROOM = 75, KING_ROOM = 100, SUITE_ROOM = 150, MIN_FLOORS = 1, MAX_FLOORS = 5, MIN_ROOMS = 1, MAX_ROOMS = 30;
	int totalRooms, occupiedRooms, numOfFloors, numOfRooms1, numOfRooms2, numOfRooms3, numOfRooms4, numOfRooms5;
	double occupancyRate;
	string location;

	cout << "Enter the location of the hotel chain: ";
	cin >> location;
	cout << endl;
	cout << "Enter total number of floors of the hotel: ";
	cin >> numOfFloors;
	cout << endl << endl;

	while (numOfFloors < MIN_FLOORS/*1*/ || numOfFloors > MAX_FLOORS/*5*/)
	{
		cout << "number of floors should be between 1 and 5 !! please try again." << endl
			<< "Enter total number of floors of the hotel: ";
		cin >> numOfFloors;
		cout << endl << endl;
	}
	
	if (numOfFloors == 5)
	{
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;

		while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)

	}
	else if (numOfFloors == 4)
	{

	}
	else if (numOfFloors == 3)
	{

	}
	else if (numOfFloors == 2)
	{

	}
	else
	{

	}

	return 0;
}
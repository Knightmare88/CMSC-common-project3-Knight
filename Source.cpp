#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int const SINGLE_ROOM = 60, DOUBLE_ROOM = 75, KING_ROOM = 100, SUITE_ROOM = 150, MIN_FLOORS = 1, MAX_FLOORS = 5, MIN_ROOMS = 1, MAX_ROOMS = 30;
	int totalRooms, occupiedRooms, numOfFloors, numOfRooms1, numOfRooms2, numOfRooms3, numOfRooms4, numOfRooms5, single1, single2, single3, single4, single5, double1, double2, double3, double4, double5, king1, king2, king3, king4, king5, suite1, suite2, suite3, suite4, suite5,
		rooms1 = 0, rooms2 = 0, rooms3 = 0, rooms4 = 0, rooms5 = 0, singleCost, doubleCost, kingCost, suiteCost;
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
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 1st floor: ";
			cin >> numOfRooms1;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;

		while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 2nd floor: ";
			cin >> numOfRooms2;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;

		while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 3rd floor: ";
			cin >> numOfRooms3;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 4th floor: ";
		cin >> numOfRooms4;

		while (numOfRooms4 < MIN_ROOMS /*1*/ || numOfRooms4 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 4th floor: ";
			cin >> numOfRooms4;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 5th floor: ";
		cin >> numOfRooms5;

		while (numOfRooms5 < MIN_ROOMS /*1*/ || numOfRooms5 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 5th floor: ";
			cin >> numOfRooms5;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 1st floor";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;

		while (rooms1 > numOfRooms1)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 1st floor";
			cin >> single1;
			cout << "How many DOUBLE rooms are occupied in the 1st floor";
			cin >> double1;
			cout << "How many KING rooms are occupied in the 1st floor";
			cin >> king1;
			cout << "How many SUITE rooms are occupied in the 1st floor";
			cin >> suite1;
			rooms1 = single1 + double1 + king1 + suite1;
		}

		cout << "How many SINGLE rooms are occupied in the 2nd floor";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;

		while (rooms2 > numOfRooms2)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 2nd floor";
			cin >> single2;
			cout << "How many DOUBLE rooms are occupied in the 2nd floor";
			cin >> double2;
			cout << "How many KING rooms are occupied in the 2nd floor";
			cin >> king2;
			cout << "How many SUITE rooms are occupied in the 2nd floor";
			cin >> suite2;
			rooms2 = single2 + double2 + king2 + suite2;
		}

		cout << "How many SINGLE rooms are occupied in the 3rd floor";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;

		while (rooms3 > numOfRooms3)
		{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 3rd floor";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
		}

		cout << "How many SINGLE rooms are occupied in the 4th floor";
		cin >> single4;
		cout << "How many DOUBLE rooms are occupied in the 4th floor";
		cin >> double4;
		cout << "How many KING rooms are occupied in the 4th floor";
		cin >> king4;
		cout << "How many SUITE rooms are occupied in the 4th floor";
		cin >> suite4;
		rooms4 = single4 + double4 + king4 + suite4;

		while (rooms4 > numOfRooms4)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 4th floor";
			cin >> single4;
			cout << "How many DOUBLE rooms are occupied in the 4th floor";
			cin >> double4;
			cout << "How many KING rooms are occupied in the 4th floor";
			cin >> king4;
			cout << "How many SUITE rooms are occupied in the 4th floor";
			cin >> suite4;
			rooms4 = single4 + double4 + king4 + suite4;
		}

		cout << "How many SINGLE rooms are occupied in the 5th floor";
		cin >> single5;
		cout << "How many DOUBLE rooms are occupied in the 5th floor";
		cin >> double5;
		cout << "How many KING rooms are occupied in the 5th floor";
		cin >> king5;
		cout << "How many SUITE rooms are occupied in the 5th floor";
		cin >> suite5;
		rooms5 = single5 + double5 + king5 + suite5;

		while (rooms5 > numOfRooms5)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 5th floor";
			cin >> single5;
			cout << "How many DOUBLE rooms are occupied in the 5th floor";
			cin >> double5;
			cout << "How many KING rooms are occupied in the 5th floor";
			cin >> king5;
			cout << "How many SUITE rooms are occupied in the 5th floor";
			cin >> suite5;
			rooms5 = single5 + double5 + king5 + suite5;
		}

		singleCost = single1 + single2 + single3 + single4 + single5;
		doubleCost = double1 + double2 + double3 + double4 + double5;
		kingCost = king1 + king2 + king3 + king4 + king5;
		suiteCost = suite1 + suite2 + suite3 + suite4 + suite5;

	}
	else if (numOfFloors == 4)
	{
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;

		while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 1st floor: ";
			cin >> numOfRooms1;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;

		while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 2nd floor: ";
			cin >> numOfRooms2;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;

		while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 3rd floor: ";
			cin >> numOfRooms3;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 4th floor: ";
		cin >> numOfRooms4;

		while (numOfRooms4 < MIN_ROOMS /*1*/ || numOfRooms4 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 4th floor: ";
			cin >> numOfRooms4;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 1st floor";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;

		while (rooms1 > numOfRooms1)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 1st floor";
			cin >> single1;
			cout << "How many DOUBLE rooms are occupied in the 1st floor";
			cin >> double1;
			cout << "How many KING rooms are occupied in the 1st floor";
			cin >> king1;
			cout << "How many SUITE rooms are occupied in the 1st floor";
			cin >> suite1;
			rooms1 = single1 + double1 + king1 + suite1;
		}

		cout << "How many SINGLE rooms are occupied in the 2nd floor";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;

		while (rooms2 > numOfRooms2)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 2nd floor";
			cin >> single2;
			cout << "How many DOUBLE rooms are occupied in the 2nd floor";
			cin >> double2;
			cout << "How many KING rooms are occupied in the 2nd floor";
			cin >> king2;
			cout << "How many SUITE rooms are occupied in the 2nd floor";
			cin >> suite2;
			rooms2 = single2 + double2 + king2 + suite2;
		}

		cout << "How many SINGLE rooms are occupied in the 3rd floor";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;

		while (rooms3 > numOfRooms3)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 3rd floor";
			cin >> single3;
			cout << "How many DOUBLE rooms are occupied in the 3rd floor";
			cin >> double3;
			cout << "How many KING rooms are occupied in the 3rd floor";
			cin >> king3;
			cout << "How many SUITE rooms are occupied in the 3rd floor";
			cin >> suite3;
			rooms3 = single3 + double3 + king3 + suite3;
		}

		cout << "How many SINGLE rooms are occupied in the 4th floor";
		cin >> single4;
		cout << "How many DOUBLE rooms are occupied in the 4th floor";
		cin >> double4;
		cout << "How many KING rooms are occupied in the 4th floor";
		cin >> king4;
		cout << "How many SUITE rooms are occupied in the 4th floor";
		cin >> suite4;
		rooms4 = single4 + double4 + king4 + suite4;

		while (rooms4 > numOfRooms4)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 4th floor";
			cin >> single4;
			cout << "How many DOUBLE rooms are occupied in the 4th floor";
			cin >> double4;
			cout << "How many KING rooms are occupied in the 4th floor";
			cin >> king4;
			cout << "How many SUITE rooms are occupied in the 4th floor";
			cin >> suite4;
			rooms4 = single4 + double4 + king4 + suite4;
		}

		singleCost = single1 + single2 + single3 + single4;
		doubleCost = double1 + double2 + double3 + double4;
		kingCost = king1 + king2 + king3 + king4;
		suiteCost = suite1 + suite2 + suite3 + suite4;

	}
	else if (numOfFloors == 3)
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 2nd floor: ";
	cin >> numOfRooms2;

	while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 3rd floor: ";
	cin >> numOfRooms3;

	while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
	}

	cout << "How many SINGLE rooms are occupied in the 2nd floor";
	cin >> single2;
	cout << "How many DOUBLE rooms are occupied in the 2nd floor";
	cin >> double2;
	cout << "How many KING rooms are occupied in the 2nd floor";
	cin >> king2;
	cout << "How many SUITE rooms are occupied in the 2nd floor";
	cin >> suite2;
	rooms2 = single2 + double2 + king2 + suite2;

	while (rooms2 > numOfRooms2)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 2nd floor";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
	}

	cout << "How many SINGLE rooms are occupied in the 3rd floor";
	cin >> single3;
	cout << "How many DOUBLE rooms are occupied in the 3rd floor";
	cin >> double3;
	cout << "How many KING rooms are occupied in the 3rd floor";
	cin >> king3;
	cout << "How many SUITE rooms are occupied in the 3rd floor";
	cin >> suite3;
	rooms3 = single3 + double3 + king3 + suite3;

	while (rooms3 > numOfRooms3)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 3rd floor";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
	}

	singleCost = single1 + single2 + single3;
	doubleCost = double1 + double2 + double3;
	kingCost = king1 + king2 + king3;
	suiteCost = suite1 + suite2 + suite3;

	}
	else if (numOfFloors == 2)
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 2nd floor: ";
	cin >> numOfRooms2;

	while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
	}

	cout << "How many SINGLE rooms are occupied in the 2nd floor";
	cin >> single2;
	cout << "How many DOUBLE rooms are occupied in the 2nd floor";
	cin >> double2;
	cout << "How many KING rooms are occupied in the 2nd floor";
	cin >> king2;
	cout << "How many SUITE rooms are occupied in the 2nd floor";
	cin >> suite2;
	rooms2 = single2 + double2 + king2 + suite2;

	while (rooms2 > numOfRooms2)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 2nd floor";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
	}

	singleCost = single1 + single2;
	doubleCost = double1 + double2;
	kingCost = king1 + king2;
	suiteCost = suite1 + suite2;

	}
	else
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
	}

	singleCost = single1;
	doubleCost = double1;
	kingCost = king1;
	suiteCost = suite1;

	}

	singleCost = singleCost * 60;
	doubleCost = doubleCost * 75;
	kingCost = kingCost * 100;
	suiteCost = suiteCost * 150;

	cout << endl << endl << endl << "========================================================================================" << endl
		<< left << setw(50) << "BlueMont Hotel located in " << location << endl
		<< setw(60) << "TODAY'S ROOM RATES (US$/night)" << endl
		<< setw(30) << "Single Room" << setw(30) << "Double Room" << setw(20) << "King Room" << setw(20) << "Suite Room" << endl
		<< setw(30) << singleCost << setw(30) << doubleCost << setw(30) << kingCost << setw(30) << suiteCost << endl
		<< "========================================================================================";

	return 0;
}

/*
* Class: CMSC140 CRN
 * Instructor: Khandan Monshi
 * Project3
 * Description: Hotel income calculator
 * Due Date: 10/27/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Knight

   NOTE: This code is EXTREMELY lazy, and should not be copied, and will be harder to read than neccesary

 * Pseudocode or Algorithm for the program:
 Initialize Variables (a lot of variables)
Display intro
Output “Enter location of this hotel”
Get input for String: Location
Output “Enter total number of floors for this hotel”
Get input for total floors
Repeat last 2 steps if invalid input (<1 || >5)
Ask for number of rooms on 1st floor
Ask for number of rooms on 2nd floor if total floors [>=2]
Ask for number of rooms on 3rd floor if total floors [>=3]
Ask for number of rooms on 4th floor if total floors [>=4]
Ask for number of rooms on 5th floor if total floors [=5]
Ask for number of occupied Single, Double, King and Suite rooms on each applicable floor
Add up total number of each type of room from each floor
Multiply by appropriate cost multiplier for each kind of room
Display income from each type of room
Add up income from each room
Display total income
Display total # of rooms
Calculate number of unoccupied rooms
Display total # of unoccupied rooms
Calculate occupancy rate
Display occupancy rate
Display floor with least number of rooms
Display “Need to improve hotel occupancy rate” if occupancy rate is [<=50]
Display closing statements

I HIGHLY, and I mean HIGHLY reccomend minimizing pretty much anything you are not looking at,
as this is lazy code, and thus takes up a lot of space
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// this enough variables for you? :P
	int const SINGLE_ROOM = 60, DOUBLE_ROOM = 75, KING_ROOM = 100, SUITE_ROOM = 150, MIN_FLOORS = 1, MAX_FLOORS = 5, MIN_ROOMS = 1, MAX_ROOMS = 30;
	int totalRooms, numOfFloors, numOfRooms1 = 0, numOfRooms2 = 0, numOfRooms3 = 0, numOfRooms4 = 0, numOfRooms5 = 0, single1, single2, single3, single4, single5, double1, double2, double3, double4, double5, king1, king2, king3, king4, king5, suite1, suite2, suite3, suite4, suite5,
		rooms1 = 0, rooms2 = 0, rooms3 = 0, rooms4 = 0, rooms5 = 0, singleCost, doubleCost, kingCost, suiteCost, hotelIncome, totalOccupied, totalUnoccupied;
	double occupancyRate;
	string location;

	cout << "=======================================================" << endl
		<< "            " << "BlueMont Hotel" << endl
		<< "=======================================================" << endl;

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

	//all of these do the same thing but for different numbers of floors V
	if (numOfFloors == 5)
	{
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;

		while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 1st floor: ";
			cin >> numOfRooms1;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;

		while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 2nd floor: ";
			cin >> numOfRooms2;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;
		cout << endl;

		while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 3rd floor: ";
			cin >> numOfRooms3;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 4th floor: ";
		cin >> numOfRooms4;
		cout << endl;

		while (numOfRooms4 < MIN_ROOMS /*1*/ || numOfRooms4 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 4th floor: ";
			cin >> numOfRooms4;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 5th floor: ";
		cin >> numOfRooms5;
		cout << endl;

		while (numOfRooms5 < MIN_ROOMS /*1*/ || numOfRooms5 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 5th floor: ";
			cin >> numOfRooms5;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 1st floor: ";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor: ";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor: ";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
		cout << endl;

		while (rooms1 > numOfRooms1)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 1st floor: ";
			cin >> single1;
			cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
			cin >> double1;
			cout << "How many KING rooms are occupied in the 1st floor: ";
			cin >> king1;
			cout << "How many SUITE rooms are occupied in the 1st floor: ";
			cin >> suite1;
			rooms1 = single1 + double1 + king1 + suite1;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor: ";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor: ";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
		cout << endl;

		while (rooms2 > numOfRooms2)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 2nd floor: ";
			cin >> single2;
			cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
			cin >> double2;
			cout << "How many KING rooms are occupied in the 2nd floor: ";
			cin >> king2;
			cout << "How many SUITE rooms are occupied in the 2nd floor: ";
			cin >> suite2;
			rooms2 = single2 + double2 + king2 + suite2;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor: ";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor: ";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
		cout << endl;

		while (rooms3 > numOfRooms3)
		{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 3rd floor: ";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor: ";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor: ";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
		cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 4th floor: ";
		cin >> single4;
		cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
		cin >> double4;
		cout << "How many KING rooms are occupied in the 4th floor: ";
		cin >> king4;
		cout << "How many SUITE rooms are occupied in the 4th floor: ";
		cin >> suite4;
		rooms4 = single4 + double4 + king4 + suite4;
		cout << endl;

		while (rooms4 > numOfRooms4)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 4th floor: ";
			cin >> single4;
			cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
			cin >> double4;
			cout << "How many KING rooms are occupied in the 4th floor: ";
			cin >> king4;
			cout << "How many SUITE rooms are occupied in the 4th floor: ";
			cin >> suite4;
			rooms4 = single4 + double4 + king4 + suite4;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 5th floor: ";
		cin >> single5;
		cout << "How many DOUBLE rooms are occupied in the 5th floor: ";
		cin >> double5;
		cout << "How many KING rooms are occupied in the 5th floor: ";
		cin >> king5;
		cout << "How many SUITE rooms are occupied in the 5th floor: ";
		cin >> suite5;
		rooms5 = single5 + double5 + king5 + suite5;
		cout << endl;

		while (rooms5 > numOfRooms5)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 5th floor: ";
			cin >> single5;
			cout << "How many DOUBLE rooms are occupied in the 5th floor: ";
			cin >> double5;
			cout << "How many KING rooms are occupied in the 5th floor: ";
			cin >> king5;
			cout << "How many SUITE rooms are occupied in the 5th floor: ";
			cin >> suite5;
			rooms5 = single5 + double5 + king5 + suite5;
			cout << endl;
		}
		// getting the total number of rooms
		totalRooms = numOfRooms5 + numOfRooms4 + numOfRooms3 + numOfRooms2 + numOfRooms1;
		// grabbing number of each kind of occupied room
		singleCost = single1 + single2 + single3 + single4 + single5;
		doubleCost = double1 + double2 + double3 + double4 + double5;
		kingCost = king1 + king2 + king3 + king4 + king5;
		suiteCost = suite1 + suite2 + suite3 + suite4 + suite5;
		//using these values to get total num of occupied rooms
		totalOccupied = singleCost + doubleCost + kingCost + suiteCost;
		//getting unoccupied rooms 
		totalUnoccupied = totalRooms - totalOccupied;
	}
	else if (numOfFloors == 4)
	{
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;

		while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 1st floor: ";
			cin >> numOfRooms1;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;

		while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 2nd floor: ";
			cin >> numOfRooms2;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;
		cout << endl;

		while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 3rd floor: ";
			cin >> numOfRooms3;
			cout << endl;
		}

		cout << "Enter total number of rooms on the 4th floor: ";
		cin >> numOfRooms4;
		cout << endl;

		while (numOfRooms4 < MIN_ROOMS /*1*/ || numOfRooms4 > MAX_ROOMS /*30*/)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
			cout << "Enter total number of rooms on the 4th floor: ";
			cin >> numOfRooms4;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 1st floor: ";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor: ";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor: ";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
		cout << endl;

		while (rooms1 > numOfRooms1)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 1st floor: ";
			cin >> single1;
			cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
			cin >> double1;
			cout << "How many KING rooms are occupied in the 1st floor: ";
			cin >> king1;
			cout << "How many SUITE rooms are occupied in the 1st floor: ";
			cin >> suite1;
			rooms1 = single1 + double1 + king1 + suite1;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor: ";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor: ";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
		cout << endl;

		while (rooms2 > numOfRooms2)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 2nd floor: ";
			cin >> single2;
			cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
			cin >> double2;
			cout << "How many KING rooms are occupied in the 2nd floor: ";
			cin >> king2;
			cout << "How many SUITE rooms are occupied in the 2nd floor: ";
			cin >> suite2;
			rooms2 = single2 + double2 + king2 + suite2;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor: ";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor: ";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
		cout << endl;

		while (rooms3 > numOfRooms3)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 3rd floor: ";
			cin >> single3;
			cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
			cin >> double3;
			cout << "How many KING rooms are occupied in the 3rd floor: ";
			cin >> king3;
			cout << "How many SUITE rooms are occupied in the 3rd floor: ";
			cin >> suite3;
			rooms3 = single3 + double3 + king3 + suite3;
			cout << endl;
		}

		cout << "How many SINGLE rooms are occupied in the 4th floor: ";
		cin >> single4;
		cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
		cin >> double4;
		cout << "How many KING rooms are occupied in the 4th floor: ";
		cin >> king4;
		cout << "How many SUITE rooms are occupied in the 4th floor: ";
		cin >> suite4;
		rooms4 = single4 + double4 + king4 + suite4;
		cout << endl;

		while (rooms4 > numOfRooms4)
		{
			cout << "More rooms input then available rooms, try again" << endl << endl <<
				"How many SINGLE rooms are occupied in the 4th floor: ";
			cin >> single4;
			cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
			cin >> double4;
			cout << "How many KING rooms are occupied in the 4th floor: ";
			cin >> king4;
			cout << "How many SUITE rooms are occupied in the 4th floor: ";
			cin >> suite4;
			rooms4 = single4 + double4 + king4 + suite4;
			cout << endl;
		}
		//getting total number of rooms
		totalRooms = numOfRooms4 + numOfRooms3 + numOfRooms2 + numOfRooms1;
		//grabbing total number of each kind of room
		singleCost = single1 + single2 + single3 + single4;
		doubleCost = double1 + double2 + double3 + double4;
		kingCost = king1 + king2 + king3 + king4;
		suiteCost = suite1 + suite2 + suite3 + suite4;
		//using these values to get total num of occupied rooms
		totalOccupied = singleCost + doubleCost + kingCost + suiteCost;
		//getting unoccupied rooms 
		totalUnoccupied = totalRooms - totalOccupied;
	}
	else if (numOfFloors == 3)
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;
	cout << endl;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 2nd floor: ";
	cin >> numOfRooms2;
	cout << endl;

	while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 3rd floor: ";
	cin >> numOfRooms3;
	cout << endl;

	while (numOfRooms3 < MIN_ROOMS /*1*/ || numOfRooms3 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 3rd floor: ";
		cin >> numOfRooms3;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor: ";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor: ";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor: ";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;
	cout << endl;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor: ";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor: ";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor: ";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
	cin >> single2;
	cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
	cin >> double2;
	cout << "How many KING rooms are occupied in the 2nd floor: ";
	cin >> king2;
	cout << "How many SUITE rooms are occupied in the 2nd floor: ";
	cin >> suite2;
	rooms2 = single2 + double2 + king2 + suite2;
	cout << endl;

	while (rooms2 > numOfRooms2)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 2nd floor: ";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor: ";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor: ";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
	cin >> single3;
	cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
	cin >> double3;
	cout << "How many KING rooms are occupied in the 3rd floor: ";
	cin >> king3;
	cout << "How many SUITE rooms are occupied in the 3rd floor: ";
	cin >> suite3;
	rooms3 = single3 + double3 + king3 + suite3;
	cout << endl;

	while (rooms3 > numOfRooms3)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 3rd floor: ";
		cin >> single3;
		cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
		cin >> double3;
		cout << "How many KING rooms are occupied in the 3rd floor: ";
		cin >> king3;
		cout << "How many SUITE rooms are occupied in the 3rd floor: ";
		cin >> suite3;
		rooms3 = single3 + double3 + king3 + suite3;
		cout << endl;
	}
	//getting total rooms
	totalRooms = numOfRooms3 + numOfRooms2 + numOfRooms1;
	//getting total of each kind of occupied rooms
	singleCost = single1 + single2 + single3;
	doubleCost = double1 + double2 + double3;
	kingCost = king1 + king2 + king3;
	suiteCost = suite1 + suite2 + suite3;
	//using these values to get total num of occupied rooms
	totalOccupied = singleCost + doubleCost + kingCost + suiteCost;
	//getting unoccupied rooms 
	totalUnoccupied = totalRooms - totalOccupied;

	}
	else if (numOfFloors == 2)
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;
	cout << endl;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "Enter total number of rooms on the 2nd floor: ";
	cin >> numOfRooms2;
	cout << endl;

	while (numOfRooms2 < MIN_ROOMS /*1*/ || numOfRooms2 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 2nd floor: ";
		cin >> numOfRooms2;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor: ";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor: ";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor: ";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;
	cout << endl;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor: ";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor: ";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor: ";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
	cin >> single2;
	cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
	cin >> double2;
	cout << "How many KING rooms are occupied in the 2nd floor: ";
	cin >> king2;
	cout << "How many SUITE rooms are occupied in the 2nd floor: ";
	cin >> suite2;
	rooms2 = single2 + double2 + king2 + suite2;
	cout << endl;

	while (rooms2 > numOfRooms2)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 2nd floor: ";
		cin >> single2;
		cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
		cin >> double2;
		cout << "How many KING rooms are occupied in the 2nd floor: ";
		cin >> king2;
		cout << "How many SUITE rooms are occupied in the 2nd floor: ";
		cin >> suite2;
		rooms2 = single2 + double2 + king2 + suite2;
		cout << endl;
	}
	//getting total rooms
	totalRooms = numOfRooms2 + numOfRooms1;
	//getting total occupied of each kind of room
	singleCost = single1 + single2;
	doubleCost = double1 + double2;
	kingCost = king1 + king2;
	suiteCost = suite1 + suite2;
	//using these values to get total num of occupied rooms
	totalOccupied = singleCost + doubleCost + kingCost + suiteCost;
	//getting unoccupied rooms 
	totalUnoccupied = totalRooms - totalOccupied;

	}
	else
	{
	cout << "Enter total number of rooms on the 1st floor: ";
	cin >> numOfRooms1;
	cout << endl;

	while (numOfRooms1 < MIN_ROOMS /*1*/ || numOfRooms1 > MAX_ROOMS /*30*/)
	{
		cout << "number of rooms should be between 1 and 30 !! Please try again" << endl << endl;
		cout << "Enter total number of rooms on the 1st floor: ";
		cin >> numOfRooms1;
		cout << endl;
	}

	cout << "How many SINGLE rooms are occupied in the 1st floor: ";
	cin >> single1;
	cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
	cin >> double1;
	cout << "How many KING rooms are occupied in the 1st floor: ";
	cin >> king1;
	cout << "How many SUITE rooms are occupied in the 1st floor: ";
	cin >> suite1;
	rooms1 = single1 + double1 + king1 + suite1;
	cout << endl;

	while (rooms1 > numOfRooms1)
	{
		cout << "More rooms input then available rooms, try again" << endl << endl <<
			"How many SINGLE rooms are occupied in the 1st floor: ";
		cin >> single1;
		cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
		cin >> double1;
		cout << "How many KING rooms are occupied in the 1st floor: ";
		cin >> king1;
		cout << "How many SUITE rooms are occupied in the 1st floor: ";
		cin >> suite1;
		rooms1 = single1 + double1 + king1 + suite1;
		cout << endl;
	}
	totalRooms = numOfRooms1;
	singleCost = single1;
	doubleCost = double1;
	kingCost = king1;
	suiteCost = suite1;
	//using these values to get total num of occupied rooms
	totalOccupied = singleCost + doubleCost + kingCost + suiteCost;
	//getting unoccupied rooms 
	totalUnoccupied = totalRooms - totalOccupied;

	}
	//all of these do the same thing but for different numbers of floors ^

	//Num of rooms has already been established
	singleCost = singleCost * 60;
	doubleCost = doubleCost * 75;
	kingCost = kingCost * 100;
	suiteCost = suiteCost * 150;
	hotelIncome = singleCost + doubleCost + kingCost + suiteCost;

	//calculating occupancy rate
	occupancyRate = (double)totalOccupied / totalRooms;
	occupancyRate = occupancyRate * 100;

	cout << endl << endl << endl << "========================================================================================" << endl
		<< "           BlueMont Hotel located in " << location << endl
		<< setw(40) << "    TODAY'S ROOM RATES (US$/night)" << endl
		<< setw(40) << "Single Room" << setw(20) << "Double Room" << setw(20) << "King Room" << setw(20) << "Suite Room" << endl
		<< setw(20) << singleCost << setw(20) << doubleCost << setw(20) << kingCost << setw(20) << suiteCost << endl
		<< "========================================================================================"
		<< endl << "            Hotel Income:            $" << hotelIncome
		<< endl << "        Total # of Rooms:           " << totalRooms
		<< endl << "  Total # Occupied Rooms:           " << totalOccupied
		<< endl << "Total # Unoccupied Rooms:           " << totalUnoccupied
		<< endl << setprecision(4) << "          Occupancy Rate:           " << occupancyRate << "%" << endl << endl;


	//displaying which floor has the least number of rooms
	if (numOfFloors == 5)
	{
		if (numOfRooms1 < numOfRooms2 && numOfRooms1 < numOfRooms3 && numOfRooms1 < numOfRooms4 && numOfRooms1 < numOfRooms5)
			cout << "1st Floor with " << numOfRooms1 << ", has the least number of rooms.";
		else if (numOfRooms2 < numOfRooms1 && numOfRooms2 < numOfRooms3 && numOfRooms2 < numOfRooms4 && numOfRooms2 < numOfRooms5)
			cout << "2nd Floor with " << numOfRooms2 << ", has the least number of rooms.";
		else if (numOfRooms3 < numOfRooms1 && numOfRooms3 < numOfRooms2 && numOfRooms3 < numOfRooms4 && numOfRooms3 < numOfRooms5)
			cout << "3rd Floor with " << numOfRooms3 << ", has the least number of rooms.";
		else if (numOfRooms4 < numOfRooms1 && numOfRooms4 < numOfRooms2 && numOfRooms4 < numOfRooms3 && numOfRooms4 < numOfRooms5)
			cout << "4th Floor with " << numOfRooms4 << ", has the least number of rooms.";
		else
			cout << "5th Floor with " << numOfRooms5 << ", has the least number of rooms.";
	}
	else if (numOfFloors == 4)
	{
		if (numOfRooms1 < numOfRooms2 && numOfRooms1 < numOfRooms3 && numOfRooms1 < numOfRooms4)
			cout << "1st Floor with " << numOfRooms1 << ", has the least number of rooms.";
		else if (numOfRooms2 < numOfRooms1 && numOfRooms2 < numOfRooms3 && numOfRooms2 < numOfRooms4)
			cout << "2nd Floor with " << numOfRooms2 << ", has the least number of rooms.";
		else if (numOfRooms3 < numOfRooms1 && numOfRooms3 < numOfRooms2 && numOfRooms3 < numOfRooms4)
			cout << "3rd Floor with " << numOfRooms3 << ", has the least number of rooms.";
		else 
			cout << "4th Floor with " << numOfRooms4 << ", has the least number of rooms.";
	}
	else if (numOfFloors == 3)
	{
		if (numOfRooms1 < numOfRooms2 && numOfRooms1 < numOfRooms3)
			cout << "1st Floor with " << numOfRooms1 << ", has the least number of rooms.";
		else if (numOfRooms2 < numOfRooms1 && numOfRooms2 < numOfRooms3)
			cout << "2nd Floor with " << numOfRooms2 << ", has the least number of rooms.";
		else
			cout << "3rd Floor with " << numOfRooms3 << ", has the least number of rooms.";
	}
	else if (numOfFloors == 2)
	{
		if (numOfRooms1 < numOfRooms2)
			cout << "1st Floor with " << numOfRooms1 << ", has the least number of rooms.";
		else
			cout << "2nd Floor with " << numOfRooms2 << ", has the least number of rooms.";
	}
	else
	{
		cout << "1st Floor with " << numOfRooms1 << ", has the least number of rooms.";
	}
	if (occupancyRate <= 50)
	{
		cout << endl << "Need to improve Hotel occupancy rate!!";
	}
	else
	{

	}

	cout << endl 
		<< "Thank you for testing my program!!" << endl
		<< "PROGRAMMER: Knightmare88" << endl
		<< "CMSC C140 Common Project 3" << endl
		<< "Due Date: 10/27/2021";
	return 0;
}

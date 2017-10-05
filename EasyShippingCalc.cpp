// EasyShippingCalc.cpp : Defines the entry point for the console application.
//Author : Katlynn Stone
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>


using namespace std;

int main()
{
	double userTotal = 0.0;
	string itemName;
	char fragile;
	string destination;
	double shipCost = 0.0;
	double TotalShipCost = 0.0;
	
	cout << ".............................................." << endl;
	cout << "ITCS 2530 - PROGRAMMING ASSIGNMENT FOR WEEK #3" << endl;
	cout << ".............................................." << endl;

	cout << "Please enter the item name (no spaces).................:";
	cin >> itemName;
	transform(itemName.begin(), itemName.end(), itemName.begin(), ::toupper);
	cout << "Is this item fragile? (y=yes/n=no).....................:";
	cin >> fragile;
	fragile = toupper(fragile);
	cout << "Please enter your order total..........................:";
	cin >> userTotal;
	cout << "Please enter destination. (USA/CAN/AUS)................:";
	cin >> destination;
	transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
	cout << endl;
	

	if (destination == "USA") {
		if (userTotal <= 50.00) {
			shipCost = 6.00;
		}
		else if (userTotal <= 100.00) {
			shipCost = 9.00;
		}
		else if (userTotal <= 150.00) {
			shipCost = 12.00;
		}
		else {
			shipCost = 0.00;
		}
	}
	else if (destination == "CAN") {
		if (userTotal <= 50.00) {
			shipCost = 8.00;
		}
		else if (userTotal <= 100.00) {
			shipCost = 12.00;
		}
		else if (userTotal <= 150.00) {
			shipCost = 15.00;
		}
		else {
			shipCost = 0.00;
		}
	}
	else if (destination == "AUS") {
		if (userTotal <= 50.00) {
			shipCost = 10.00;
		}
		else if (userTotal <= 100.00) {
			shipCost = 14.00;
		}
		else if (userTotal <= 150.00) {
			shipCost = 17.00;
		}
		else {
			shipCost = 0.00;
		}
	}
	else {
		cout << "invalid destination" << endl;
		getchar();
	}

	cout << "Your item is.......................:" << itemName << endl;
	cout << "Your shipping cost is..............:$" << shipCost << endl;
	cout << "You are shipping to................:" << destination << endl;
	TotalShipCost = userTotal + shipCost;
	cout << "Your total shipping costs are......:$" << setprecsion(2) << fixed << TotalShipCost << endl;
	cout << endl;
	cout << "--------------------------------------Thank You!" << endl;
	cin >> TotalShipCost;

	getchar();
	return 0;
}

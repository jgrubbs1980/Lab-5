// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <limits>
using namespace std;

int main()
{
	int beginningInventory = 50;

	char drinkChoice, sizeChoice, memberChoice;
	int quantity;
	string foodName;
	string sizeName;
	string tipAdd;
	int32_t chosentipAmount;
	double unitPrice = 0.0;
	double subtotal = 0.0;
	double total = 0.0;
	double tipAmount = 0.0;

	cout << "---Menu---";
	cout << "Items";
	cout << fixed << setprecision(2);
	cout << setw(15) << "Small (s)";
	cout << setw(15) << "Medium (m)";
	cout << setw(15) << "Large (l)";
	cout << setw(18) << "-------------------------------------------------------------------------Fries" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Burger" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Pizza" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Soda" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Pretzel" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << setw(18) << "Icee" << setw(15) << "$1.00" << setw(15) << "$1.50" << setw(15) << "$2.00" << endl;
	cout << "----------" << endl;

	cout << "Pick a food item: ";
	cin >> foodName;
	cout << "Pick a size (s/m/l): ";
	cin >> sizeName;
	int itemQuantity;
	cout << "Enter item quantity: ";
	cin >> itemQuantity;
	char isMember;
	cout << "Are you a member? (Y/N) ";
	cin >> isMember;

	if (foodName == "Pizza" || foodName == "pizza")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Burger" || foodName == "burger")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Fries" || foodName == "fries")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Soda" || foodName == "soda")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Pretzel" || foodName == "pretzel")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Icee" || foodName == "icee")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}

	subtotal = unitPrice * itemQuantity;

	if (isMember == 'Y' || isMember == 'y')
	{
		subtotal = subtotal * 0.9;
	}

	double STATE_TAX = subtotal * 0.065;
	double COUNTY_TAX = subtotal * 0.005;
	double MUNCIPAL_TAX = subtotal * 0.02125;
	double totalTax = STATE_TAX + COUNTY_TAX + MUNCIPAL_TAX;
	cout << "County Tax: " << COUNTY_TAX << endl;
	cout << "Municipal Tax: " << MUNCIPAL_TAX << endl;
	cout << "State Tax: " << STATE_TAX << endl;
	cout << "Total Tax: " << totalTax << endl;


	cout << "Would you like to add a tip? (Y/N) ";
	cin >> tipAdd;
	if (tipAdd == "Y" || tipAdd == "y")
	{
		string tipPercentage = "0.0";
		string chosentipAmount;
		cout << "Enter tip amount: ";
		cout << setw(18) << "15%" << setw(15) << "20%" << setw(15) << "25%" << setw(15) << "Other Amount" << endl;
		cin >> tipPercentage;
		if (tipPercentage == "15")
		{
			tipAmount = subtotal * 0.15;
		}
		else if (tipPercentage == "20")
		{
			tipAmount = subtotal * 0.20;
		}
		else if (tipPercentage == "25")
		{
			tipAmount = subtotal * 0.25;
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter custom tip amount: ";
			cin >> tipAmount;

		}
		
	}

	total = subtotal + totalTax + tipAmount;

	cout << setw(10) <<
		setprecision(2)
		<< "---Receipt---" << endl;
	cout << "Food Item: " << foodName << endl;
	cout << "Unit Price: " << unitPrice << endl;
	cout << "Subtotal: " << subtotal << endl;
	cout << "Total Tax: " << totalTax << endl;
	cout << "Tip Amount: " << tipAmount << endl;
	cout << "Total: " << total << endl;


	cout << "Enter cashier notes: ";
	string cashierNotes;
	cin.ignore();
	getline(cin, cashierNotes);

	cout << "\nEnding Inventory ";
	cout << beginningInventory - itemQuantity;

}



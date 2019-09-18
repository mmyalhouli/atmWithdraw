// ATM_withdrawl_code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void printBills(int*, int*); //This function prints all the withdrawls
int main()
{
	int noOfBills[5]; //Stores the total bills
	int withdrawAmount[5] = { 50,20,10,5,1 };  //stores withdraw amounts
	int input = 0; //decalring a variable to take withdrawl amount from the user
	char c; //variable declared to take yes or no input from the user after one transaction/withdrawl is done

	do {
		do {  // This do while loops takes the withdrawl amount from the user and ensures that it is in the given range
			cout << "Enter the amount to be withdrawn. You can withdraw amount from $1 upto $300 only: ";
			cin >> input;
		} while (input < 1 || input>300);
		//$50, $20, $10, $5 and $1 

		int a = input;
		//This for loop calculates the total bills 
		for (int i = 0; i < 5; i++) {
			noOfBills[i] = a / withdrawAmount[i];
			a = a % withdrawAmount[i];

		}
		printBills(noOfBills, withdrawAmount); //calls an external function which will print the multiple bills

		cout << "Another withdrawl? Enter Y to continue or press n to end your withdrawl:";  //asks user if they want to make another withdrawl
		cin >> c;

	} while (c != 'n');  //while loop ends here


	return 0;
}
void printBills(int* myarray, int*with) {  //This function prints the multiple bills

	int*bills = new int[5]; //stores total bills
	bills = myarray;
	int*withdraw = new int[5];  //stores withdrwal amount
	withdraw = with;


	for (int i = 0; i < 5; i++) {//prints multiple bills using for loop

		if (bills[i] != 0) {
			cout << "No of " << withdraw[i] << " bills=" << bills[i] << endl;
		}
	}

}
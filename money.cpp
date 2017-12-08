/*---------------------------------------------
This is the implementation for the class Money.
The interface is in the file money.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
--------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include "money.h"

using namespace std;

void Money::setDollars(double newDollars)
{
	if (newDollars > 0)
		dollars = newDollars;
	else
	{
		cout<<"Invalid argument in mutator function: Aborting program.";
		exit(1);
	}
}

void Money::setCents(double newCents)
{
	if (newCents > 0 && newCents < 1)
		cents = newCents;
	else
	{
		cout<<"Invalid argument to mutator function: Aborting program.";
		exit(1);
	}
}

double Money::getDollars()
{
	return dollars;
}

double Money::getCents()
{
	return cents;
}

double Money::ouputAmount()
{
	return dollars+cents;
}

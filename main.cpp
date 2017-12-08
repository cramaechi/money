//Program creates and ouputs the number of dollars and cents of Money objects.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "money.h"

using namespace std;

void input(Money& m);
//Reads user input into Money object m.

void output(Money& m);
//Precondition: Money object m contains monetary data.
//Postcondition: Prints out monetary value stored in Money object m.

int main()
{
	Money money;

    input(money);
    output(money);

	return 0;
}

void input(Money& m)
{
    cout<<"Enter monetary amount (in U.S. dollars): $";
    double amount;
    cin>>amount;

    double cents = fmod(amount, 1);
    m.setDollars(amount - cents);
    m.setCents(cents);

    cout<<endl;
}

void output(Money& m)
{
    cout<<"Your monetary amount printed back is $"<<m.ouputAmount()<<endl;
}

/*--------------------------------------------------------
Description: This is the header file money.h. This is the 
interface for the class Money. Values of this type store 
a monetary amount.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
--------------------------------------------------------*/
class Money
{
public:
	void setDollars(double newDollars);
	//Precondition: newDollars > 0.
	//Postcondition: The variable dollars is set to the value of the argument newDollars.
	void setCents(double newCents);
	//Precondition: newCents > 0 && newCents < 1.
	//Postcondition: The variable cents has been initialized to the value of the argument newCents.
	double getDollars();
	//Return the value of the variable dollars.
	double getCents();
	//Returns the value of the variable cents;
	double ouputAmount();
	//Returns the amount of money the object has.
private:
	double dollars;
	double cents;
};

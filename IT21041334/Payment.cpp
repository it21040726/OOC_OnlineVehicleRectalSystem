//implementation of Payment class
#include "Payment.h"
#include "Cart.h"
#include<iostream>
#include<cstring>
using namespace std;

Payment::Payment()
{
}

Payment::Payment(int pID, const char pMethod[], Cart* c_art)
{
	paymentID = pID;
	strcpy_s(payMenthod, pMethod);
	c_art1 = c_art;
}

void Payment::CalcTotal(double pamount)
{
	amount = pamount;
	int total;
	total = c_art1 * amount;
}

void Payment::displayTotal()
{
	cout << "Total Amunt is :" << total << endl;
}

Payment::~Payment()
{
	cout << "Payment destructor caled !" << endl;
}

//Declaring Payment class
#include "Cart.h"

class Payment
{
private:
	int paymentID;
	double amount;
	char payMenthod[10];
	Cart* c_art1;
public:
	Payment();
	Payment(int pID, const char pMethod[], Cart* c_art);
	void CalcTotal(double pamount);
	void displayTotal();
	~Payment();
};


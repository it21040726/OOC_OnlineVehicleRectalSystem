#pragma once
#include "Payment.h"// there is not this header in my program, this part done by another guy

#include "Item.h"
class Cart
{
private:
	int Cart_id;
	int quantity;
	Payment * pay1;
	Item * Itm;

	
public:
	Cart();// default constructor
	Cart( int cart_no , int qty , Payment* pay , Item * Im); // overload constructor and association relationship with payment class and aggregration relationship with item class
	void Remove_Item();
	void Display();
	~Cart(); //destructor
};


#pragma once
#include "Cart.h"
#include "Registered_Customer.h" // there is not this header in my program, this part done by another guy

class Item
{
private:
	int Item_id;
	char Item_name [30];
	char Item_Decsription[50];
	Registered_Customer * cs1;



public:
	Item();
	Item(int Item_no, const char name[], const char des[], Registered_Customer * cus );// destructor  association relationship with registered customer 
	void Delete_item();
	void Display_item();
	~Item(); //destructor

};


#include "Cart.h"
#include<iostream>
using namespace std;
Cart::Cart()
{
	 Cart_id = 0;
	 quantity = 0;

	
}

Cart::Cart(int cart_no, int qty , Payment * pay , Item* Im) //
{
	Cart_id = cart_no;
	quantity = qty;
	pay1 = pay;
	Itm = Im;
}

void Cart::Remove_Item()
{
}


void Cart::Display()
{
	cout << "........................................." << endl;
	cout << "Cart ID :" << Cart_id << endl;
	cout << "Quantity :" << quantity << endl;
	pay1->Displaytotal();
	cout << "........................................." << endl;
}

Cart::~Cart()
{
	cout << "Cart destructore called !!" << endl;
}

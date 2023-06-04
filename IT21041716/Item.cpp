#include "Item.h"
#include<iostream>
#include<cstring>
using namespace std;
Item::Item()
{
	Item_id = 0;
	strcpy_s(Item_name ,"");
	strcpy_s(Item_Decsription , "");
	
}

Item::Item(int Item_no, const char name[], const char des[], Registered_Customer * cus)
{
	Item_id = Item_no;
	strcpy_s(Item_name, name);
	strcpy_s(Item_Decsription, des);
	cs1 = cus;
}

void Item::Delete_item()
{

}

void Item::Display_item()
{
	cout << "........................................." << endl;
	cout << " Item ID :" << Item_id << endl;
	cout << " Item Name :"<< Item_name <<endl;
	cout << " Item_Decsription" << Item_Decsription << endl;
	cout << "........................................." << endl;

}

Item::~Item()
{
	cout << "Item destructore called !!" << endl;
}

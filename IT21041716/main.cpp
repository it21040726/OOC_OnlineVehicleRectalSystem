#include "Item.h"
#include "Cart.h"
#include "Payment.h" 
#include "Registered_Customer.h" 
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    Registered_Customer * cus; 
    Payment * pmt1;         
    Item* it1;

    // cart object create 
    Cart* crt1;
    crt1 = new Cart(121212, 5, pmt1 , it1);
    crt1->Remove_Item();
    crt1->Display();

    // Item object create 
    Item* it1;
    it1 = new Item (101 , "Nike T-Shirt" , "blue color collar t shirt ",cus);
    it1->Delete_item();
    it1->Display_item();
    
    //dynamic object delete
    delete it1;
    delete crt1;

    return 0;
}


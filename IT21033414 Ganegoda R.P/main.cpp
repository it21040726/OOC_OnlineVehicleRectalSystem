#include <iostream>
#include <cstring>
#include "Account.h"
#include "Report.h"
#include "Item.h"
#include "Registered_customer.h"
#include "Admin.h"
using namespace std;

int main() {
  
  Registered_customer * cst;
  Admin * adm;


  Report * rep1;
  rep1 = new Report( 100 , "Stock");
  rep1->Genarate_report(Item *i);
  rep1->DisplayReport();

  Account * acct;
  acct = new Account(500 ,"admin",cst ,adm);
  acct ->  DisplayAccDetails();




  delete rep1;
  delete acct;
  return 0;
}
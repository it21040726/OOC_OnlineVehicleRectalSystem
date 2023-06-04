#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

Account::Account()
{
  Account_no = 0;
  strcpy (Account_type,""); 

}
Account::Account(int AcctNo , const char AcctType[] ,Registered_customer * cs , Admin * ad)
{
  Account_no = AcctNo;
  strcpy(Account_type, AcctType);
  cs1 = cs;
  ad1 = ad;
}
void Account:: DisplayAccDetails()
{
  cout<<"...................................."<<endl;
  cout<<"Account number :" <<Account_no<< endl;
  cout<<"Account Type :" <<Account_type<< endl;

  cout<<"...................................."<< endl;

}
Account:: ~Account()
{
  cout<<"Account destructor called !!"<<endl;
}
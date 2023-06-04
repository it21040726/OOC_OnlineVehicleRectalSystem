#include "Registered_customer.h"
#include "Admin.h"
class Account{

private :
  int Account_no;
  char Account_type[20];
  Registered_customer * cs1;
  Admin * ad1;

public :
  Account();
  Account(int AcctNo ,const char AcctType[] ,Registered_customer * cs , Admin * ad);
  void DisplayAccDetails();
  ~Account();




}
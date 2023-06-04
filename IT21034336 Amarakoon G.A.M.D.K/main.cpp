#include <iostream>
#include"user.h"
#include"Admin.h"

using namespace std;

int main() {
  user*u1;
  u1 = new user("dush1","dush@gmail.com");
  u1->Display();

  Admin*a1;
  a1 = new Admin(1,"jak1","123Cool","Admin");
  a1->DisplayAdmin();
  
  a1->AddItems(10);
  a1->DeleteItems(2);
  
  delete u1;
  delete a1;
  
}
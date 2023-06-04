#include"user.h"
#include<iostream>
#include<cstring>

using namespace std;

user::user(const char n[], const char mail[]){
  strcpy(Username,n);
  strcpy(Email,mail);
 
}

user::~user(){
  cout<<"User "<<Username<<" deleted"<<endl;
}

void user::Display(){
  cout<< "Username : " <<Username<<endl;

}
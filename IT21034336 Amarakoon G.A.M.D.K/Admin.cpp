
#include"Admin.h"
#include<iostream>
#include<cstring>

using namespace std;
Admin::Admin(int id,const char name[],const char pwd[],const char des[]){
  AdminID = id;
  strcpy(Username,name);
  strcpy(password,pwd);
  strcpy(designation,des);

}

Admin::~Admin(){
  cout<< "Admin "<< AdminID << " deleted"<<endl;
  }

void Admin::DisplayAdmin(){
  cout<< "Admin ID : "<<AdminID<<endl;
  Display();
  cout<< "Password : " <<password<<endl;
  cout<< "Designation : "<<designation<<endl;
  
}

void Admin::AddItems(int qty){
   cout<<qty<<" items are added"<<endl;


}

void Admin::DeleteItems(int qty){
  cout<<qty<<" items are deleted"<<endl;

  
}
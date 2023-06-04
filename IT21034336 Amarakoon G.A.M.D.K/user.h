#pragma once
class user{
  protected:
  char Username[20];
  char Email[30];

  public:
  //constructors and distructors
  user(){};
  user(const char n[], const char mail[]);
  ~user();
  
  //other methods
  void Display();
};
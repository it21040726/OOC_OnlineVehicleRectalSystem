#include"user.h"
class Admin:public user{
  private:
  int AdminID;
  char password[8];
  char designation[10];

  public:
  //constructors and distructors
  Admin(){};
  Admin(int id,const char name[],const char pwd[],const char des[]);
  ~Admin();

  //other methods
  void DisplayAdmin();
  void AddItems(int qty);
  void DeleteItems(int qty);
  
};
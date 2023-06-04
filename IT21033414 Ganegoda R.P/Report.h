#include "Item.h"
class Report{

private :
  int Report_id;
  char Report_name[30];
  
 

public :
  Report();
  Report(int Rp_no, const char Rp_name[]);
  void Genarate_report(Item *i);
  void DisplayReport();
  ~Report();




}
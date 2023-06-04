#include <iostream>
#include <cstring>
#include "Report.h"
using namespace std;



  Report::Report()
  {
    Report_id = 0;
    strcpy (Report_name,"");
  }
  Report::Report(int Rp_no ,const char Rp_name[])
  {
    Report_id = Rp_no;
    strcpy (Report_name,Rp_name);
  }
  void Report::Genarate_report(Item *i)
  {

  }
  void Report::DisplayReport()
  {
    cout<<"...................................."<<endl;
    cout<<"Report ID :" <<Report_id<< endl;
    cout<<"Report Name :" <<Report_name<< endl;

  cout<<"...................................."<< endl;

  }
  Report::~Report()
  {
    
  }
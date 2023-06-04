// implementation of Feedback class
#include "Feedback.h"
#include<iostream>
#include<cstring>
using namespace std;

Feedback::Feedback()
{
}

Feedback::Feedback(int fID, int fDate, const char descrip[], Registered_customer* cus)
{
	feedbackID = fID;
	date = fDate;
	strcpy_s(description, descrip);
}

void Feedback::displayFeedback()
{
}

Feedback::~Feedback()
{
	cout << "Feedback destructor caled !" << endl;
}

//Declaring Feedback class
#include "Registered_customer.h"
class Feedback
{
private:
	int feedbackID;
	int date;
	char description[20];
	Registered_customer* cs1;
public:
	Feedback();
	Feedback(int fID, int fDate, const char descrip[], Registered_customer* cus);
	void displayFeedback();
	~Feedback();
};


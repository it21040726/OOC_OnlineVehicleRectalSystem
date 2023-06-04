#pragma once
#include "User.h"
class Unregistered_Customer : public User
{
public:
	//Constructor and destructor
	Unregistered_Customer(const char tEmail[300], const char tUname[50]);
	~Unregistered_Customer();

	//other methods
	void checkFeedback();
	void registerCust();
};


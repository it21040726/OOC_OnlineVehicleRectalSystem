#pragma once
#include "User.h"
#include "Item.h"
#include "Account.h"
class Registered_Customer : public User
{
protected:
	char customerName[50];
	char customerDOB[20];
	char address[200];
	char teleNo[15];
	int userID;
	char password[50];
public:
	//Constructor and Destructor
	Registered_Customer(const char tName[50], const char tDOB[20], const char tAddress[200], const char tTellNo[15], int tUID, const char tPass[50], const char tEmail[300], const char tUname[50]);
	~Registered_Customer();

	//Other Methods
	void purchaseItems();
	void makePayments();
};


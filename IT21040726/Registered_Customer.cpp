#include "Registered_Customer.h"
#include <iostream>
#include <cstring>

using namespace std;

Registered_Customer::Registered_Customer(const char tName[50], const char tDOB[20], const char tAddress[200], const char tTellNo[15], int tUID, const char tPass[50], const char tEmail[300], const char tUname[50]) : User(tEmail, tUname) {
	strcpy_s(customerName, tName);
	strcpy_s(customerDOB, tDOB);
	strcpy_s(address, tAddress);
	strcpy_s(teleNo, tTellNo);
	strcpy_s(username, tUname);
	strcpy_s(password, tPass);
}

Registered_Customer::~Registered_Customer() {
	cout << "Registered Customer " << username << " Deleted" << endl;
}

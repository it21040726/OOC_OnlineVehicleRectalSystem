#include "Unregistered_Customer.h"
#include <iostream>
#include <cstring>

using namespace std;

Unregistered_Customer::Unregistered_Customer(const char tEmail[300], const char tUname[50]) : User (tEmail, tUname) {
	cout << "Unregistered Customer" << endl;
}

Unregistered_Customer::~Unregistered_Customer() {
	cout << "Unregistered Customer Removed" << endl;
}

#include "User.h"
#include "Registered_Customer.h"
#include "Unregistered_Customer.h"

using namespace std;

int main() {
	Registered_Customer* RC1 = new Registered_Customer("Harshangi", "25/05/2001", "piliyandala", "7638456483", 0001, "Harshi123", "harshangiperera@gmail.com", "Harshi001");

	Unregistered_Customer* UC1 = new Unregistered_Customer("dushmaniamarakoon@gmail.com", "dushii");

	delete RC1;
	delete UC1;
}
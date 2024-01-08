//Hiding or wrapping data and info at a place, class is perfect example while controlling access to them as making variable private, we control that with the help of function
//for this we use functions inside class with private variables
//encapsulation means we dont want users to access variable directly
//rather we use function with check conditions for vague values

//Encapsulation doesn't give direct access to the data to the customers

#include <iostream>
using namespace std;

class Customer{
public:
	string name;
	int balance;

	Customer(string a, int b){
		name = a;
		balance = b;
	}
}




int main() {

	Customer A1("K", 1000);
    
}

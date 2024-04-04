//displaying only essential information and hiding the details
//like calling the function without going into the nitty-gritty details

#include <iostream>
using namespace std;


class Customer{
	string name;
	int balance;

public:
	Customer(string a, int b){
		name = a;
		balance = b;
	}

	void deposit(int amount){
		if(amount > 0){
			balance += amount;
		}
	}
};





int main() {

	Customer A1("KA", 1);
	A1.deposit(1);
    
}

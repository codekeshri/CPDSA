//Destructor - it is an instant function that is invoked automatically whenever an object is going to be destroyed


#include <iostream>
using namespace std;

class Customer{
	string name;
	int *balance;

public:
	Customer(){
		cout << "default constructor" << endl;
	}
	// ~Customer(){
	// 	cout << "destructor is called" << endl;
	// }
	Customer(string name, int bal){
		this->name = name;
		balance = new int;
		*balance = bal;
		cout << "parameterized" << " " << name << endl;
	}

	//destructor calls automatically no return type or parameter
	// do not delete object rather it deletes attributes
	//closes the open file
	~Customer(){
		//delete balance;
		cout << "default destructor" << " " << name << endl;
	}
};

int main() {
	Customer A1("Arvind Keshri", 111);
	Customer A2("K Keshri", 111);
	Customer A3("S Keshri", 111);
	Customer *A5 = new Customer;
	delete A5;

    
}

#include <iostream>
using namespace std;

class Customer{
	string name;
	int account_number, balance;
	static int total_balance;
	public:                                      //constructor is used to initialize the objects attributes
	static int total_customer;                    //only one copy is created and shared by entire class
		Customer(string a, int b, int c){
			this->name = a;
			this->account_number = b;
			this->balance = c;
			total_customer++;
			total_balance++;
		}

		static void accessStatic(){
			cout << "total number of customers = " << total_customer << endl;
			cout << "total balance of bank = " << total_balance << endl;


		}

		void deposit(int amount){
			if(amount > 0){
				balance += amount;
				total_balance += amount;
			}
		}

		void withdraw(int amount){
			if(amount <= balance && amount > 0){
				balance -= amount;
				total_balance -= amount;
			}
		}

		void display(){
			cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
		}
		void display_total(){
			cout << total_customer << endl;
		}

};

int Customer::total_customer = 0;
int Customer::total_balance = 0;


int main() {

    Customer A1("Arvind", 1, 1000);
    A1.display_total();
    A1.display();
    Customer A2("K", 2, 1001);
    A2.display();
    A1.display();
    A1.display_total();
    A2.display_total();
    Customer A3("Ai", 1, 0);

    cout << Customer::total_customer <<endl;
    Customer::accessStatic();

    A1.deposit(800);
    Customer::accessStatic();

    A2.withdraw(300);
    Customer::accessStatic();
}

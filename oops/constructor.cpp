#include <iostream>
using namespace std;

//constructor - it is a special function that is invoked while creating class
class Customer{

    string name;
    int account_number;
    int balance;

    public:
    // default constructor  //constructor doesn't have any return type
    Customer(){ 
       
        name = "Arvind Keshri";
        account_number = 1;
        balance = 0;
       cout << "constructor is called" << endl;
    }
    void display(){
        cout << name << " " <<  account_number << " " << balance << endl;
    }

    // parameterized constructor
    // Customer(string name, int account_number, int balance){
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    //constructor overloading collects undeclared parameter value from garbage collector
    Customer(string a, int b){
        name = a;
        account_number = b;
    }

    //inline constructor
    inline Customer(string a, int b, int c): name(a), account_number(b), balance(c){

    }

    //copy constructor, compiler creates this automatically if not created
    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;

    }



};






int main() {
    Customer A1("Arvind Keshri", 123, 432);
    Customer A2("K", 0, 1); //constructor function called automatically
    
    A1.display();
    A2.display();
    Customer A4(A1);

    A4.display();
    Customer A5 = A1;
    A5.display();

    

}




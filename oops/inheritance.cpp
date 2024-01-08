#include <iostream>
using namespace std;
//parent and child or base and derived class
//the capability of a class to derive properties from a class
//protected, public and private
// external code, within class and derived class in public
//in protected, no external use but can be used within and in derived class

// private only within the class and not in external or derived class

class Human{
	string name;
	int age, weight;



public:
	Human();
	~Human();
	
};

class Teacher{
	string name;
	int age, weight;
	int salary, id;
};

class Student{
	string name;
	int age, weight, fees, roll_number;
}





int main() {
    
}

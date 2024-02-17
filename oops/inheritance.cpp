#include <iostream>
using namespace std;
//parent and child or base and derived class
//the capability of a class to derive properties from a class
//protected, public and private
// external code, within class and derived class in public
//in protected, no external use but can be used within and in derived class

// private only within the class and not in external or derived class

class Human{
	string Religion, color;
public:
	string name;
	int age, weight;
	
};


class Student: protected Human 
{
private: 
	int roll_number, fees;
	
public: 
	Student(string name, int age, int weight, int roll_number, int fees){
		this->name = name;
		this->age = age;
		this->weight = weight;
		this->roll_number = roll_number;
		this->fees = fees;
		
	}
	
	void display(){
		cout << name <<" "<< age<<" " << weight<<" " << roll_number<<" " << fees <<" ";
	}
};





int main() {
    Student A("avi", 11, 65, 230, 30);
    A.display();
}

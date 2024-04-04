#include <iostream>
using namespace std;

class Human{
protected:
	string name;
	int age;
public:
	
	Human(string name, int age){
		this->name = name;
		this->age = age;
	}
	
	void work(){
		cout << " I am working\n";
		
	}
	
	void display(){
		cout << name <<endl;
	}
};

class Student: public Human //access modifier inheriting from Human
{
	int roll_number;
	int fees;
	
public:
	Student(string name, int age, int roll_number, int fees):Human(name, age){
		
		this->roll_number = roll_number;
		this->fees = fees;
		
	}
	
	// void display(){
	// 	cout << name << " " << age << endl;
	// }
	
	
};



int main() {
    Student A1("avi", 26, 230, 30);
    A1.work();
    A1.display();
    
}

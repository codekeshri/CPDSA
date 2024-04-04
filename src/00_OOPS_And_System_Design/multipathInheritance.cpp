//same name, page properties comes from different paths, lets handle this
//we use virtual keyword while calling parent class
//virtual simply makes parents properties unque

#include <iostream>
using namespace std;

class Human{
public:
	string name;
	
	void display(){
		cout << "My name is " << name << endl;
	}
	
};

class Engineer: public virtual Human{
public:
	string specialization;
	
	
	void work(){
		cout << " I have specialization in: " << specialization << endl;
	}
};

class Youtuber: public virtual Human{
public: 
	int subscribers;
	
	void contentcreator(){
		cout << " I have a subscribers base of " << subscribers << endl;
		
	}
	
};

class codeTeacher: public Engineer, public Youtuber{
public:
int salary;

codeTeacher(){
	
}

codeTeacher(string name, string specialization, int subscribers, int salary){
	this->name = name;
	this->specialization = specialization;
	this->subscribers = subscribers;
	this->salary = salary;
	
}
	
};





int main() {
	codeTeacher A1("avi", "CSE", 500, 11);
	A1.display();
    
}

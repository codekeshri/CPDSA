#include <iostream>
using namespace std;

class Engineer{
public:
	string specialization;
	
	
	void work(){
		cout << " I have specialization in: " << specialization << endl;
	}
};

class Youtuber{
public: 
	int subscribers;
	
	void contentcreator(){
		cout << " I have a subscribers base of " << subscribers << endl;
		
	}
	
};

class codeTeacher: public Engineer, public Youtuber{
public:
string name ;

codeTeacher(string name, string specialization, int subscribers){
	this->name = name;
	this->specialization = specialization;
	this->subscribers = subscribers;
	
}
	
	void showcase(){
		cout << " My name is " << name <<endl;
		work();
		contentcreator();	
	}	
	
};





int main() {
	codeTeacher A1("avi", "CSE", 500);
	A1.showcase();
    
}

//combine multiple and hierarchial Inheritance

#include <iostream>
using namespace std;
//student, boy, girl, male, female
class Student {
public:
	void print(){
		cout << " I am a Student\n";
	}
};

class Male{
public:
	void Maleprint(){
		cout << " I am a male\n";
	}
};

class Female{
public:
	void Femaleprint(){
		cout << " I am a Female\n";
	}
};



class Boy: public Student, public Male{
public:
	void Boyprint(){
		cout << " I am a boy\n";
	}
};


class Girl: public Student, public Female{
public:
	void Girlprint(){
		cout << " I am a girl\n";
	}
};




int main() {
	Girl G1;
	G1.Girlprint();
	G1.print();
	G1.Femaleprint();
	
	Boy B1;
	B1.Boyprint();
	B1.print();
	B1.Maleprint();
	
    
}

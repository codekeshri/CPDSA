#include <iostream>
using namespace std;

// class Student{ //user defined data-type, bllueprint for creating objects
//     private: //access modifier private and protected
//     	string name;
//     	int age, roll_number;
//     	string grade;

//     public:
//         void setName(string n){
//             name = n;
//         }
//         void setGrade(string g){
//             grade = g;
//         }
//         void getName(){
//             cout << name << endl;
//         }
//         void getGrade(){
//             cout << grade << endl;
//         }
//         string get_grade(int pin){
//             if(pin == 123)return grade;
//             return "";
//         }
// };

// int main() {
//     Student S1;
//     S1.setGrade("A+");
//     S1.setName(" K");
//     S1.getName();
//     S1.getGrade();
//     cout << endl;
//     cout << S1.get_grade(13) << endl;
// }

//memory allocation in class thru padding 
// class A{
//     char c, d; //takes memory in 1 multiples 0 to 1
//     int b;      //takes memory in 4 multiples 4 to 4
//     char f;     //takes memory in 1 multiples 8 to 8    double e;   //takes memory in 8 multiples
//     string name; //takes memory in 8 multiples 16 to 24
// };

// int main() {
//     A obj1;
//     cout << sizeof(obj1);

// }


//Dynamic memory allocation use heap memory

class Student{
    public: //access modifier private and protected
        string name;
        int age, roll_number;
        string grade;
};

int main() {
    Student *S = new Student;
(*S).name = "Arvind Keshri";
//S -> name = "Arvind Keshri;
cout << (*S).name;
    
}

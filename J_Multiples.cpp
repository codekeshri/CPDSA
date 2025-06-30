#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1 = "Multiples", str2 = "No Multiples", str;

    int a, b;
    cin >> a >> b;

    str =  a%b==0 || b%a==0 ? str1 : str2;

    cout << str << endl;

    return 0;
}
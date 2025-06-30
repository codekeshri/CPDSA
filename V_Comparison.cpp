#include <iostream>
#include <string>
using namespace std;

bool helper(int a, int b, string s)
{

    if (s == ">")
    {
        return a > b;
    }
    else if (s == "<")
    {
        return a < b;
    }
    else if (s == "=")
    {
        return a == b;
    }
}

int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;

    cout << (helper(a, b, s) ? "Right" : "Wrong");

    return 0;
}
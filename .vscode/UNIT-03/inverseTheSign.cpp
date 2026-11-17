#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    void input(){
        cout << "Enter a number: ";


        cin >> n;
    }

    void operator-()
    {
        n = -n;
    }

    void display(){
        cout << "Number with changed sign: " << n;
    }
};

int main()
{
    Number obj;
    obj.input();
    -obj; 
    obj.show();
}
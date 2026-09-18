// 
#include <bits/stdc++.h>
using namespace std;
class Students{
    public:
    int age;
    string name;
    Students(int a,string n){
        this->age=a; // arrow oprator is used when pointer function
        this->name=n; // this oprator is used to objectify the member function.

    }
    void display(){
        cout<<"Age of student:"<<age<<endl;
        cout << "Name of student:" << name << endl;
    }
};

int main() {
    Students s1(19,"aayush");
    Students s2(20, "aaman");
    s1.display();
    s2.display();
    return 0;
}
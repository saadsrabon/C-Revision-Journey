// Dynamic class object
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;

    Student(string name, int age)
    {
       this->name=name;
       this->age=age;
    }

  
};
Student * fun()
{
    Student *st=new Student("saad",24);
    return st;
}
int main() 
{
    Student *st= fun();
    return 0;
}
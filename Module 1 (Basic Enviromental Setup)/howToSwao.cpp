#include<iostream>
#include<utility> // this line is for swap
using namespace std;
int main() 
{
    int a = 10, b = 20;

    // manual swap
    int temp = a;
    a = b;
    b = temp;
    //using swa
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // this line is for swap
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
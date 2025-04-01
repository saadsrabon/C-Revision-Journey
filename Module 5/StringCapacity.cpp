#include<bits/stdc++.h>
using namespace std;
int main() 
{
//     //
//   Here we will practice String in C++ and its capacity
//     s.size() -> returns the size of the string.
string a = "Hello World";
a.size(); // 11
cout<<a.size()<<endl;
// s.max_size() -> returns the maximum size that string can hold.
// s.capacity() -> returns current available capacity of the string.
// s.clear() -> clear the string.
a.clear();
cout<<a.size()<<endl;
cout <<a<<endl;
// s.empty() -> return true/false if the string is empty.
// s.resize() -> change the size of the string.

    return 0;
}
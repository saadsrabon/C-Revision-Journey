#include <iostream>

 

using namespace std;

// switch (expression) {

//     case value1:
   
//     // code to execute if expression == value1
   
//     break;
   
//     case value2:
   
//     // code to execute if expression == value2
   
//     break;
   
//     // ... more cases
   
//     default:
   
//     // code to execute if expression doesn't match any case
   
//     break;
   
//    }
   

int main() {

 char grade = 'A';

 
switch (grade)
{
case 'A':
    cout << "Excellent" << endl;
    break;

case 'B':
    cout << "Good" << endl;
    break;

case 'C':
    cout << "Average" << endl;
    break; // if we not add break then it will go on to next case

default:
    break;
}

 

 return 0;

}

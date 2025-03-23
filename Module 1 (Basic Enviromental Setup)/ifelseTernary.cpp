#include <iostream>

using namespace std; // this line helps in standard input and output rather than using std::

int main()
{

    int x = 10;

    if (x == 10)
    {

        cout << "It is ten out of ten\n";
    }
    else
    {

        cout << "This is not ten" << endl;
    }

    // ternary operator
    int n;

    cin >> n;

    n>10 ? cout << "Greater than 10" : cout << "Less than 10";

    return 0;
}

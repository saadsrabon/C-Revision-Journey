#include <iostream> // This line is for standard input and output
#include <algorithm> // This line is for min and max
using namespace std;


int main() // from here our main function starts
{
    int a, b;
    cin >> a >> b ; // input
    cout << min(a,b) << endl;
    cout << max(a,b);

    // If you want to compare more than two numbers

    // int x, y, z;
    // cin >> x >> y >> z;
    // cout << min(x, min(y, z));
    // cout << max(x, max(y, z));
    // cout << min({x, y, z});
    // cout << max({x, y, z});
    return 0;
}
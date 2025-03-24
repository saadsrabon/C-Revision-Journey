#include<bits/stdc++.h>
using namespace std;

int *createArray(int n)
{
    int *arr = new int[n];
    return arr;
}
int main() 
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int *arr = createArray(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
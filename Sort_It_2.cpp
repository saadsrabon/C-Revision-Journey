#include<bits/stdc++.h>
using namespace std;
int sort_it(int A[],int N)
{
    sort(A,A+N,greater<int>());
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
};
int main() 
{
    int N;
    cin>>N;
    int A[N];

    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    sort_it (A,N);
    return 0;
}
#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int A[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0)
                A[i][j] = 1;
            else
            {
                A[i][j] = A[i][j-1] + A[i-1][j];
            }
            
        } 
    }
    cout<<A[n-1][n-1];
    

}

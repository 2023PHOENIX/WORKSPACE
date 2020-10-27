#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  int count{0};
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            int m,n;    cin>>m>>n;
            if(n-m>=2)
                count++;
        }
    }
    cout<<count;
}
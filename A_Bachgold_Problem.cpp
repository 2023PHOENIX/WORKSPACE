#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;  cin>>n;

    if(n%2==0)
    {
        int k = n/2;

        cout<<k<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        int k = n/2;

        cout<<k<<endl;
        for(int i=0;i<k-1;i++)
            cout<<2<<" ";
        cout<<3<<" ";
    }
}
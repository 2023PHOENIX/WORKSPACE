#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;    cin>>n>>m;
    int c{0};
   
   if(n>m)
    {
        cout<<n-m<<endl;
    }
    else
    {


    
    while(n<m)
    {
        if(m%2==0)
        {
           m = m/2;

        }
        else
        {
            m++;
        }
        c++;    
    }
    cout<<(n-m)+c<<endl;
    }

    
}
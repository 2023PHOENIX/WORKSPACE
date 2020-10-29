#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    string H = "I hate that ";
    string L = "I love that ";
    string HL = "I hate it ";
    string LL = "I love it ";

    if(n==1)
    {
        cout<<"I hate it ";
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(i%2==0)
                cout<<L;
            if(i%2!=0)
                cout<<H;
        }
        if(n%2==0)
            cout<<LL;
        else
        {
            cout<<HL;
        }
        
    }
    
}
#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
 int sA{0},sB{0},sD{0};
    while(n--)
    {
        int a,b;    
        cin>>a>>b;

       

        if(a>b)
            sA+=1;
        if(a<b)
            sB+=1;        
        
    }
    if(sA>sB)
        cout<<"Mishka\n";
    else if(sA<sB)
        cout<<"Chris\n";
    else
    {
        cout<<"Friendship is magic!^^\n";
    }
    
}
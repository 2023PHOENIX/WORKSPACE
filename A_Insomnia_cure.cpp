#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n,d;    cin>>k>>l>>m>>n>>d;
    int c{0};

    c = d;
    if(k==1||l==1||m==1||n==1)
    {
        cout<<c<<endl;
    }
    else
    {
        for(int i=1;i<=d;i++)
        {
            if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
                c--;            // number escapes from k,l,m,n
        }
        
         cout<<c<<endl;
    }
   
    
}
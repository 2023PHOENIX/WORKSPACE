const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a,int b)
{
    int gcd{0};

    for(int i=1;i<=a and i<=b ;i++){

        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
        
    }
    return gcd;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,n;
    cin>>a>>b>>n;
    
    bool flag{false};
    bool player{0};

    while(true)
    {
         int X{0};
        if(player==0)
         {
             X= gcd(a,n);
         }
        if(player==1)
        {
            X = gcd(b,n);
        }
        if(n-X >= 0)
        {
        n = n-X;
        }
        if(n-X<0)
        {
         break;   
        }

        (player)?player=0:player=1;


    }
    (player)?cout<<1:cout<<0;
}
#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    
    while(n--)
    {
        ll N;  cin>>N;
        int flag{0};
        for(ll i=2;i<=N/2;i++)
        {
            if(N%i==0)
            {
                flag += 1;

                
            }
        }
         (flag==1)?cout<<"YES\n":cout<<"NO\n";
    }

   

}


 #define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    int p{0},c{0};
    while(t--)
    {
        int n;  cin>>n;
        
        if(n>0)
        {
            p+=n;  
            continue;
        }
        else
        {
            if(p<=0)
                {
                    c++;
                    continue;
                }
            if(p>0)
            {
                p--;
                continue;
            }
            
            
        }
        
    }
    cout<<c<<endl;
}

const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;   cin>>t;

    while(t--) 
    {
        int a,b;    cin>>a>>b;

        if(a&1==1 and b&1==1)
        {
            if(a==b)
            {
                cout<<2*(a+b)<<endl;
            }
            else          
                cout<<max(a,b)*2<<endl;
        }
        else if(a&1==0 || b&1==0)
        {
            if(a==b)
                cout<<2*(a+b)<<endl;
            else
                cout<<(max(a,b)+1)*2<<endl;
        }
        else
        {
            if(a==b)
                cout<< 2 * (a+b) << endl;
            else
            {
                cout<<max(a,b)*2<<endl;
            }
            
        }
        
    }
}
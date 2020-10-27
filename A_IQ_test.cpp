#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
        int even{0},odd_l{0},even_l{0};
    for(int i=1;i<=n;i++)
    {
        int d;  cin>>d;
        if(d%2==0)
        {
            even++;
            even_l = i;
        }
        else
        {
            even--;
            odd_l = i;

        }
        
    }
    (even>0)?cout<<odd_l:cout<<even_l;  
}

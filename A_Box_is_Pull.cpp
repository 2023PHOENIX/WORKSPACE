#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll t;  cin>>t;

    while(t--)
    {
        ll ix,iy;
        ll bx,by;
        cin>>ix>>iy>>bx>>by;
        ll counter{0};
        if(ix!=bx && iy != by)
        {
            counter = abs(ix-bx) + abs(iy-by) + 2;
        }
        else
        {
            if(ix!=bx)
                counter = abs(ix-bx);
            else
            {
                counter = abs(iy-by);
            }
            
        }
        cout << counter <<endl;
    }
}
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;


    while(t--)
    {
        int n;  cin>>n;
        int k{0};
        int i{1};
        int c{0};
        while(k!=n)
        {
            k+=i;

            i++;
            c+=i;
            if(i==4)
                i=1;
        }
        
    }
}
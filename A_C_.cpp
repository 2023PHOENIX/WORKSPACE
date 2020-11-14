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
        int X{0},y{0},i{0},sum{0};
        int a,b,n;    cin>>a>>b>>n;

        while(X<n)
        {
            X = min(a,b);
            y = max(a,b);

            sum += y;

            a = X; 
            b = y;


            i++;
        }
        cout<<i<<endl;
    }
}
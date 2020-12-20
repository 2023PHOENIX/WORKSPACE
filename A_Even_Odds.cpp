const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int k;  cin>>k;

    int index = (n+1)/2;

    if(k>index)
        {
            k = k - index;
            cout<<2*k<<"\n";
        }
    else{
        cout<<2*k - 1<<"\n";
    }
}   
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
    int c{0};
    for(int i=1;i<=(n/2);i++)
    {
        int k = n-i;

        if(k%i==0)
            c++;
    }
    cout<<c<<endl;
}
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
    int current{0},last{0},i{0};
    while(n>0)
    {
        i++;
        current = i + last;
        last = current;
        n = n - current;

        if(n<0)
            i--;
        
    }
    cout<<i<<endl;
}
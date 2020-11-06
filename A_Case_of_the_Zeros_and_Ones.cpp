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

    string s;   cin>>s;
    int c1{0};
    for(auto i : s)
        if(i=='1')
            c1++;
    
    int k = s.size()-c1;

    cout<<abs(k-c1);
}
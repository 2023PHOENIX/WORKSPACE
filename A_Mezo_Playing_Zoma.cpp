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
    string s;
    cin>>s;
    int l{0},r{0};

    
    for(auto i: s)
    {
        if(i=='L')
            l++;
        
    }

   cout<<n+1<<endl;
}
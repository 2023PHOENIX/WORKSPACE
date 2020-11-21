const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;   cin>>s;

    for(int i=0;i<s.size()-1;i++)
    {
        if(s.at(i)=='.')
            cout<<0;
        if(s.at(i)=='-' and s.at(i+1)=='.')
            cout<<1; i++; continue;
        if(s[i]=='-' and s[i+1] =='-')
            cout<<2; i++;continue;
        
        
        
    }
}
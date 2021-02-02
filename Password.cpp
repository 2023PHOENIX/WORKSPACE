const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool solve(string s)
{
    int n= s.length();
    if(n<10)
        return false;
    bool hasLower{false},hasUpper{false},hasDigit{false},hasSymbol{false};
    for(int i=0;i<n;i++)
    {
        if(islower(s[i]))
            hasLower = true;
    }

    for(int i=1;i<n-1;i++)
    {
        if(isupper(s[i]))
            hasUpper = true;
        if(isdigit(s[i]))
            hasDigit = true;

        if(s.at(i)=='@' || s.at(i)=='#'||s.at(i)=='&'||s.at(i)=='%'|| s.at(i)=='?')
            hasSymbol=true;

    }
    if(!hasUpper)
        return false;
    if(!hasLower)
        return false;
    if(!hasDigit)
        return false;
    if(!hasSymbol)
        return false;

    return true;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        string s;   cin>>s;
        bool p = solve(s);

        (p)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
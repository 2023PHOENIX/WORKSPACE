#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;   cin>>s;

    reverse(s.begin(),s.end());
   
    string p;
    cin>>p;
    bool flag{true};

    
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)!=p.at(i))
           { flag = false;break;}
    }

    (flag==false)?cout<<"NO\n":cout<<"YES\n";
}
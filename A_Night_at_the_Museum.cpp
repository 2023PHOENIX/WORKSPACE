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

    int d = s.at(0)-'a';

    int c{0};

    if(d<=13)
        c+=d;
    else
    {
        c+=(26-d);
    }

    for(int i=1;i<s.size();i++)
    {
        d = abs(s.at(i) - s.at(i-1));

        if(d<=13)
            c+=d;
        else 
            c+=(26-d);
    }
    
    cout<<c<<endl;
}
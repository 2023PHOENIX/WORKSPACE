const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    char Ch;    cin>>Ch;

    string Z = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";

    string s;   cin>>s;

    
        for(int i=0;i<s.size();i++)
            {
                auto it = find(Z.begin(),Z.end(),s.at(i));

                if(Ch == 'R')
                    cout<<Z[it - Z.begin() -1];
                else 
                    cout<<Z[it-Z.begin() +1];
            }
    
}

const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s1; cin>>s1;
    bool flag{false};
    for(int i=0;i<5;i++)
    {
        string d;   cin>>d;

        for(int i=0;i<d.size();i++)
        {
            if(d.at(i)==s1.at(0)||d.at(i)==s1.at(1))
            {
                flag = true;
            }
            
        }
    }
    (flag)?cout<<"YES\n":cout<<"NO\n";
}
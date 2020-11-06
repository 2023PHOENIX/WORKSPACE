const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;    cin>>n>>m;

    int k = n*m;
    vector<char> A;
    bool flag{false};
    for(int i=0;i<k;i++)
    {
        char c; cin>>c;
    A.push_back(c);
        
    }

    for(auto i: A)
        {
            if(i=='C'||i=='M'||i=='Y')
                flag = true;
        }
    (flag)?cout<<"#Color":cout<<"#Black&White";
}
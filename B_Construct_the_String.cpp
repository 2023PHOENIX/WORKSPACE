const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>


using namespace std;
typedef long long int ll;
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n,a,b;  cin>>n>>a>>b;

        // b distinct 
        string s{"abcdefghijklmnopqrstuvwxyz"};
        vector<char> C;
        for(int i=0;i<b;i++)
        {
            C.push_back(s.at(i));
        }
        int i{0};
        while(n--)
        {
           
           
            cout<<C.at(i);
            i++;
            if(i==C.size())
                i=0;
        }
    cout<<endl;
    }
}
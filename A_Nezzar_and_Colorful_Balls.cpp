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

        int n;  cin>>n;
        vector<int> v(n);
        int Hash[101] = {0};

        for(auto &i : v){
            cin>>i;
            Hash[i]++;
        }

    int result = 0;
        for(int i=0;i<101;i++)
        {
            result = max(result,Hash[i]);
        }

        cout<<result<<endl;
        
    }   
}
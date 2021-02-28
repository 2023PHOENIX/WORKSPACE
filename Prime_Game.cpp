const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int checkPrimes(int n)
{
    vector<bool> v(n,true);

    v[0] = false;
    v[1] = false;
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
            for(int j=i*i;j<=n;j+=i)
                v[j] = false;
    }
    int count = 0;
    for(int i=0;i<=n;i++)
        if(v[i])
            count++;
    return count;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    while(t--){
   
    int x,y;  cin>>x>>y;

    int a = checkPrimes(x);
   


    if(a>y)
        cout<<"Divyam\n";
    else   
        cout<<"Chef\n";

    


    }
}
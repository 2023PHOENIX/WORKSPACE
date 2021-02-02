const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1000001;



int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    bool Prime[N];
    memset(Prime,true,sizeof(Prime));


    for(int i=2;i*i<=N;i++)
    {
        if(Prime[i])
          {  for(int j=i*i;j<=N;j+=i)
                Prime[j]=false;
          }
    }

    int answer[N];
    int ans = 0;

    for(int i=5;i<N;i++)
    {
        if(Prime[i] and Prime[i-2])
               ans++;

        answer[i]=ans;

    }

    int tc; cin>>tc;

    while(tc--){
        int n;  cin>>n;

        cout<<answer[n]<<endl;
    }

    
}
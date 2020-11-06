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
        int n,k;

        cin>>n>>k;
        int sum{0};

       for(int A=1;A<=n;A++)
       {
           for(int B=A+1;B<=n;B++)
           {
               int a = A&B;

               if(a<k)
                {
                    if(sum<a)
                        sum = a;

                }
           }
       }
        cout<<sum<<endl;
    }
}
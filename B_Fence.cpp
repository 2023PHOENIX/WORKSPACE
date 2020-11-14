const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int c{0},sum{INT_MAX},index{0};

    for(int i=0;i<n;i++)
    {
        c = A[i]+A[i+1]+A[i+2];

        if(c<sum)
            {
                sum = c;
                index = i;
            }
        
    }

    cout<<index+1<<endl;
}
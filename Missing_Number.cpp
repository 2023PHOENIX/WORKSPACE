const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    int A[n-1];

    for(int i=0;i<n-1;i++){
        cin>>A[i];
    }


    sort(A,A+(n-1));
    for(int i=1;i<n-1;i++)
    {
        if(A[i-1]+1!=A[i])
           { cout<<A[i-1]+1<<endl;
            break;
           }
    }
}
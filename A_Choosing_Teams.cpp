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
    int k;  cin>>k;

    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    sort(A,A+n);
  
    int c{0};

    for(int i=0;i<n-2;i+=3)
    {
        bool istrue{false};

        if(5-A[i]>=k && 5-A[i+1]>=k && 5 - A[i+2]>=k)
            istrue = true;
        
        if(istrue)
            c++;

                
    }
    cout<<c<<endl;

}
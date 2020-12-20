const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int s(int a,int b)
{
    return a>b;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;

        vector<int> A;

        for(int i=1;i<=n;i++)
        {
        
            A.push_back(i);

        } sort(A.begin(),A.end(),greater<int>());

        if(n&1)
            swap(&A.at(n/2),&A.at(n-1));
        
       

        for(int i=0;i<A.size();i++)
            cout<<A.at(i)<<" ";
        cout<<endl;

    }
}
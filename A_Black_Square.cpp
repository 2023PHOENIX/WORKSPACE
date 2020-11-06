const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int A[4];

    for(int i=0;i<4;i++)
    {
        cin>>A[i];
    }

    string s;   cin>>s;
    int c{0};

    for(auto i: s)
    {
        if(i=='1')
            c+=A[0];
        if(i=='2')
            c+=A[1];
        if(i=='3')
            c+=A[2];
        if(i=='4')
            c+=A[3];
    }
    cout<<c<<endl;


}


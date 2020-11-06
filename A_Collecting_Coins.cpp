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
        int a,b,c,n;    cin>>a>>b>>c>>n;
        int c_e{0};  
        bool flag{false};

        if(a%2==0)
            c_e++;
        if(b%2==0)
            c_e++;
        if(c%2==0)
            c_e++;
            cout<<c_e<<" ";
    if(n%2==0)
    {
        if(c_e%2!=0)
            flag = true;
    }
    else
    {
        if(c_e==0||c_e%2==0)
            flag = true;
    }
    (flag == true)?cout<<"YES\n":cout<<"NO\n";
    }   

}
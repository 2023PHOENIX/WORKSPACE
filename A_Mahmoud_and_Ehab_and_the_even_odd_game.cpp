const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n;  cin>>n;

    bool player{0};
    //mahmoud

    if(n%2==0)
          player = 0;
    else
    {
        player = 1;
    }
    (player)?cout<<"Ehab":cout<<"Mahmoud";
    
}
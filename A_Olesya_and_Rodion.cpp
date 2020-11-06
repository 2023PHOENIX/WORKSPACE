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
    int t;  cin>>t;

    int num = pow(10,n)-1;
    bool find{false};

    while(num--)
    {
        if(num%t==0){
            find = true;
            break;
        }
    }
    (find)?cout<<num:cout<<-1<<endl;
    
}
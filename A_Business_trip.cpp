const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int k;  cin>>k;
    vector<int> A;
    int total{0};
    for(int i=0;i<12;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
        total+=d;
        
    }


    if(total<k)
        cout<<-1<<endl;
    else
    {
        sort(A.rbegin(),A.rend());
        int sum{0},month{0};
        while(sum<k)
        {
            sum+=A.at(month);
            month++;

        }

        cout<<month<<endl;
        
    }
    
}
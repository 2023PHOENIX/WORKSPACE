const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int g(int n,int m)
{
    int index{0},max_index{0};
    for(int i=1;i<=n and i<=m;i++)
    {
        if(n%i==0 and m%i==0)
        {
            index = i;

            
        }
        max_index = max(index,max_index);
    }
    return max_index;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int y,w;    cin>>y>>w;

    int X = 6-max(y,w)+1;
    
    int k = g(X,6);

    cout<<X/k<<"/"<<6/k<<"\n";
    

    

    
    
}
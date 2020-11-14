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
    
    vector<int> A;

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }
    int index{0};
    bool flag{false};
    for(int i=0;i<A.size()-1;i++)
    {
        if(A.at(i)-1==A.at(i+1))
        {

            index = i;
            flag = true;
            break;
            
        }
    }
    if(flag)
    {
        cout<<"yes\n";
        cout<<A.at(index+1)<<" "<<A.at(index)<<endl;
    }
    else
    {
        cout<<"no\n";
    }
    
}
#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int x;  cin>>x;
    int count{1};
    for(int i=1;i<n;i++)
    {
        int d;  cin>>d;
        if(x==d)
            continue;
        else
        {
            count++;
            x =d;
        }
    }
    cout << count << endl;
}
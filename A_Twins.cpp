#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;

    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }
    sort(A.begin(),A.end(),greater<int>());

    int sum{0};
    for(auto i : A)
        sum+=i;
    
    int m = sum/2;
    int z{0},i{0};
    int c{0};
    while(z<=m)
    {
        z = z + A.at(i);
        i++;
        c++;
    }
    cout << c <<endl;

}
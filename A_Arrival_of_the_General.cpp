#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int min{INT_MAX},max{INT_MIN};
    int mi{0},ma{0};
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }

    for(int i=0;i<A.size();i++)
    {
        if(min>=A.at(i))
        {
            min = A.at(i);

            mi = i+1;
        }
        if(max<=A.at(i))
        {
            max = A.at(i);
            ma = i+1;
        }

    }
    cout<<max << " "<<min<<endl;
    cout<<mi<<" "<<ma<<endl;
    cout<<(A.size()-mi) + ma -1;
}
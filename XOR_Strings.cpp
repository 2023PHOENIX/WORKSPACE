const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    vector<int> A;
    int i{0};
    while(i<a.size())
    {
        int k = a[i] ^ b[i];
        A.push_back(k);
        i++;
    }

   

    for(auto i: A)
        cout<<i;
}
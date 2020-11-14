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
    string s,k;
    cin>>s>>k;
    int c{0},i{0};
    while(i<s.size())
    {
        int z = abs(s.at(i)-k.at(i));

        if(z>=5)
        {
            c = c + abs(10-z);
        }
        else 
            c = c + abs(k.at(i)-s.at(i));
        
        
        i++;
    }
    cout<<c<<endl;
}
#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;    cin>>a>>b;
    int yr{0};
    while(a<=b)
    {
        a = a*3;
        b = b*2;
        yr++;
    }

    cout << yr << endl;
}
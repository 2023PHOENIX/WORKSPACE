#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int flag{0};

    while(n--)
    {
        int d;  cin>>d;

        if(d==1)
            flag=1;
    }

    (flag==0)?cout<<"EASY\n":cout<<"HARD\n";
}
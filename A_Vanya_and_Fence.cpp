#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int h;  cin>>h;
    int  count{0};
    while(n--)
    {
        int d;  cin>>d;
        if(d>h)
            count+=2;
        else
        {
            count+=1;
        }
        


    }
    cout << count << endl;
}
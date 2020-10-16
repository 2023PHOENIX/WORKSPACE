#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;  cin>>n;
    int rem{0},max{INT_MIN};
    while(n--)
    {
        int ext;    cin>>ext;
        int entr;  cin>>entr;
        

        rem = rem + entr - ext;

       if(rem > max)
        max = rem;


    }

    cout << max << endl;
}
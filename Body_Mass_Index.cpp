const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int check(int BMI)
{
    if(BMI<=18)
        return 1;
    else if(BMI>=19 and BMI<=24)
        return 2;
    else if(BMI>=25 and BMI<=29)
        return 3;
    else
        return 4;

    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int M,H;    cin>>M>>H;

        int BMI = M / (H*H);

        cout<<check(BMI)<<endl;
    }
}
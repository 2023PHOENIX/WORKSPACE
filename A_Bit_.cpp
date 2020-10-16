#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int z{0};
    while(n--)
    {
        string S;   cin>>S;

        if(S.at(1)=='+')
            z++;
        if(S.at(1)=='-')
            z--;
        

    }
    cout << z << endl;
}
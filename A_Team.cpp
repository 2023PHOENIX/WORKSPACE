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
        vector<int> A; 
        for(int i=0;i<3;i++)
        {
            int d;  cin>>d;
            A.push_back(d);
        }

        int c{0};
        for(auto i : A)
            if(i==1)
                c++;
        
        if(c>=2)
            flag++;
    }
    cout << flag << endl;
}
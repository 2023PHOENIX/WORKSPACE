const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int d1,m1,y1;   cin>>d1>>m1>>y1;
    int d2,m2,y2;   cin>>d2>>m2>>y2;

    if(y1<y2)
    {
        cout<<0<<endl;
    }
    else
    {
        int yr = y1-y2;
        if(m1<m2)
            {
                cout<<yr*1000<<endl;
            }
        else
        {
            int mn = m1-m2;
                if(d1<d2)
                    {
                        cout<<yr*1000 + mn*500;

                    }
                else
                {
                    cout<<yr*1000+mn*500+(d1-d2)*15<<endl;
                }
                
        }
        

    }
    
}
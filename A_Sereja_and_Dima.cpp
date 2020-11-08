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
    vector<int> A;
    while(n--)
    {
        int d;  cin>>d;

        A.push_back(d);
    }

    bool k{0};
    int sum1{0},sum2{0};


    while(A.size()!=0)
        {   int x{0};
            if(A.at(A.begin()>A.at(end)))
            {
                if(!A.empty())
                    x = A.pop_front();
            }
            else
            {
                
                x = A.pop_back();
            }
            
            if(k==0)
                {
                    sum1+=x;
                }
            else {
                sum2+=x;
            }
            (x==0)?x=1:x=0;
        }
    cout<<sum1<<" "<<sum2<<endl;
}
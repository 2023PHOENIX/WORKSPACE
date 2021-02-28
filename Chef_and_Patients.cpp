const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Patient
{
    int fever;
    int wait;
    int idx;
};

bool comp(Patient &p1,Patient &p2)
{
    if(p1.fever==p2.fever)
        return p1.idx<p2.idx;
    return p1.fever>p2.fever;
}

bool cmp(Patient &p1,Patient &p2)
{
    return p1.idx<p2.idx;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int t;  cin>>t;

    while(t--){
        int n;  cin>>n;

        Patient p[n];

        for(int i=0;i<n;i++){
            cin>>p[i].fever;
            p[i].wait = 0;
            p[i].idx = i;
        }

        sort(p,p+n,comp);
        
        p[0].wait = 1;
        
        for(int i=1;i<n;i++)
            p[i].wait = p[i-1].wait + 1;

        sort(p,p+n,cmp);

        for(int i=0;i<n;i++)
        {
            cout<<p[i].wait<<" ";
        }

        cout<<endl;
    }

}
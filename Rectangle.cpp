const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


string func(string mat[],int n,int m)
{

        int top = n-1;
        int bottom = 0;
        int left = m-1;
        int right = 0;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[i].length();j++)
            {
                if(mat[i][j]=='1')
                {
                    top = min(i,top);
                    bottom = max(i,bottom);
                    left = min(left,j);
                    right = max(right,j);
                }
            }
        }    
        bool flag = false;
        for(int i=top;i<=bottom;i++)
        {
            for(int j=left;j<=right;j++)
            {
                if(mat[i][j]!='1')
                {
                    return "NO";

                }
                
            }
        }
       return "YES";
    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n,m;    cin>>n>>m;

        string mat[n];

        for(int i=0;i<n;i++)
            cin>>mat[i];

        cout<<func(mat,n,m);
    cout<<endl;
    }


}
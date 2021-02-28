const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        vector<char> k;

        for(int i=0;i<7;i++)
        {
            char d; cin>>d;
            k.push_back(d);
        }
        int mytime = 0;
        for(int i=0;i<5;i++)
        {
            if(i!=2)
                mytime = mytime * 10 + k[i]-'0';
        }

        if(k[5]=='A')
        {
            if(mytime>=1200)
                mytime -= 1200;
        }
        if(k[5]=='P')
            if(mytime<1200)
            mytime += 1200;

        // cout<<mytime<<endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        
    
        
        int n;  cin>>n;
    string s;
        for(int i=0;i<n;i++)
        {
            vector<char> v;

            for(int i=0;i<14;i++)
            {
                char d; cin>>d;
                v.push_back(d);
            }

            int arrival = 0;

            for(int i=0;i<5;i++)
            {
                if(i!=2)
                    arrival = arrival*10 + v[i]-'0'; 
            }
            if(v[5]=='A')
            {
            if(arrival>=1200)
                arrival -= 1200;
            }
            if(v[5]=='P')
                if(arrival<1200)
                arrival+= 1200;
            
            int dept = 0;

            for(int i=7;i<12;i++)
            {
                if(i!=9)
                    dept = dept*10 + v[i]-'0';
            }

            if(v[12] == 'A')
            {
                if(dept>=1200)
                    dept -= 1200;
            }
            if(v[12]=='P'){
                if(dept<1200)
                dept += 1200;
            }

           if(arrival <= mytime and dept >= mytime)
            s.push_back('1');
           else 
            s.push_back('0'); 
            
            
           
        }

        cout<<s<<endl;
    }
}
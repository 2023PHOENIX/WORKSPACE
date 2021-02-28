const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Student
{
    public:
        ll height;
        ll iq;

    Student()
    {
        height = 0;
        iq = 0;
    }
};

bool fn(Student s1,Student s2)
{
    return s1.height<s2.height;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;

        vector<Student> st(n);

        for(auto &i : st)
        {
            cin>>i.height;
        }
        for(auto &i : st)
            cin>>i.iq;
        
        sort(st.begin(),st.end(),fn);
    
        int count = 1;
        ll com = st[0].iq;
        for(int i=0;i<st.size()-1;i++)
        {
            if(com>=st[i+1].iq)
            {
             com = st[i].iq;
             count++;   
               
            }   
        }

        cout<<count<<endl;
    }
}
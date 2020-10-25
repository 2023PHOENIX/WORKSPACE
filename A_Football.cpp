#include<iostream>
using namespace std;

int main()
{
    string S;   cin>>S;

    int k = S.at(0),count{0};
    for(int i=1;i<S.size();i++)
    {
      if(S.at(i)==k)
       { count++; 
        if(count==7)
            break;}
       
    else
    {
        k = S.at(i);
    }
    
    }
    (count==7)?cout<<"YES\n":cout<<"NO\n";
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;

    string S;   cin>>S;

   int c{0};
    for(int i=0;i<S.size()-1;i++){
        if(S.at(i)==S.at(i+1))
            {
                c++;
                
            }
    }
    cout << c<<endl;
}
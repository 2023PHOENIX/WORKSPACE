#include <iostream>
#include <ctype.h>
#include <set>
using namespace std;

int main()
{
    string s;   
    getline(cin,s);
    set<char> A;

    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s.at(i)))
            {
                A.insert(s.at(i));
            }
    }

    cout<<A.size()<<endl;
}
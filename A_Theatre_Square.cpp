#include<iostream>

using namespace std;

int main()
{
    int a,b,c;  cin>>a>>b>>c;
    int peri{0};
    if(a==b)
    {
        peri = 2 * ( a+c);
    }
    else
    {
        peri = 2 * ( a + b);

    }

    cout << peri - (a+b+c) << endl;
    
}
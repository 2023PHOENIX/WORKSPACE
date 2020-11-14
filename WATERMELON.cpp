#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin>>n;

	if(n>2)
	{
		if(n%2==0)
			cout << "YES"<<endl;
		else
		{
			cout << "NO"<<endl;
		}
		
	}
	else
	{
		cout << "NO"<<endl;
	}
	
}

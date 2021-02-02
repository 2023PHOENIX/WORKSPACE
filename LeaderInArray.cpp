const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// O(n2)
void leader(int *arr,int n)
{
	bool flag{true};

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				flag = false;
			}
		}

		if(flag==true)
			cout<<arr[i]<<" ";
	}
}

// O(n)
void Leader(int *arr,int n)
{
	int currLeader = arr[n-1];
	cout<<currLeader<<" ";
	for(int i=n-2;i>=0;i--)
		{
			if(arr[i]>currLeader)
			{
				currLeader = arr[i];
				cout<<currLeader<<" ";
			}
		}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    Leader(arr,n);
	
	

}
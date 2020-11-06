const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void insertionSort(vector<int> &arr,int n)  
{  
    int i, key, j;  int c{0};
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
            c++;
        }  
        arr[j + 1] = key;  
    } 
    cout<<"Array is sorted in "<<c<<" swaps."<<endl; 
} 
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++){
        int d;  cin>>d;
        A.push_back(d);
    }
    insertionSort(A,A.size());
    cout<<"First Element: "<<A.at(0)<<"\nLast Element: "<<A.at(A.size()-1);

}
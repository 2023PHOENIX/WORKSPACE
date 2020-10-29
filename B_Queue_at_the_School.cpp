#include <iostream>
#include <ctype.h>
#include <set>
using namespace std;

void swap(char *a,char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
   int n;   cin>>n;
   int t;   cin>>t;
   int c{0};

   string s;    cin>>s;

  while(t--)
  {
       for(int i=0;i<s.size()-1;i++)
   {
       if(s.at(i)<s.at(i+1))
          { 
               swap(s.at(i),s.at(i+1));
               c++;
               i++;
          }   

   }
  
  }
   cout<<s<<endl;
}

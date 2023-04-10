#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=(n+n-1);i++)
  {
   if(i<=n)
   {
    for(int j=1;j<=i;j++)
   {
    cout<<"*";
   }
   cout<<endl;
   }
   else
   {
   for(int k=1;k<i-n;p--)
   {
    cout<<"*";
    
   }
   cout<<endl;
   }
  }
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int arr[8]={4,3,2,7,8,2,3,1};
  
  for(int i=1;i<=8;i++)
  {  
    int c=0;
   for(int j=0;j<8;j++)
   { 
    if(arr[j]==i)
    {
        c=1;
    }
   }
   if(c!=1)
   {
    cout<<i<<" ";
   }
  }

}
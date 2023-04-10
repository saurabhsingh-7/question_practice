#include<iostream>
using namespace std;
int main()
{
  int arr[7]={1,2,3,4,5,6,7};
  int k=3;
  for(int i=7-k;i<7;i++)
  {
   cout<<arr[i]<<" ";
  }
   for(int i=0;i<=k;i++)
  {
   cout<<arr[i]<<" ";
  }

}

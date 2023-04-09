#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c;
    int k=0;
    int arr[n];
   for(int i=2;i<INT_MAX;i++)
   {    c=0;
    for(int j=2;j<i;j++)
    {
      if(i%j==0)
      {
        c=1;
      }
    }
    if(c==0)
    {
        arr[k]=i;
        k++;
    }
    if(k==n)
    break;
   }
   for(int l=0;l<=n-1;l++)
   {
    cout<<arr[l]<<" ";
   }
}
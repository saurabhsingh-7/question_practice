#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int oddsum=0;
    for(int sp=0;sp<n;sp++)
    {
       for(int ep=sp;ep<n;ep++)
       {
        int sum=0;
        int m=0;
        for(int k=sp;k<=ep;k++)
        {
           m++;
          sum=sum+arr[k];
        }
        if(m%2!=0)
        {
            oddsum=oddsum+sum;
        }
       }
    }
    cout<<oddsum<<endl;
}
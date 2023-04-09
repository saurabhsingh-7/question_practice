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
    int max=0;
    for(int sp=0;sp<n;sp++)
    {
       for(int ep=sp;ep<n;ep++)
       {
        int sum=0;
        for(int k=sp;k<=ep;k++)
        {
          sum=sum+arr[k];
        }
        if(max<sum)
        {
            max=sum;
        }
       }
    }
    cout<<max<<endl;
}
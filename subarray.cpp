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
    for(int sp=0;sp<n;sp++)
    {
       for(int ep=sp;ep<n;ep++)
       {
        for(int k=sp;k<ep;k++)
        {
        cout<<arr[k]<<"\t";
        }
        cout<<endl;
       }
    }
}
// *****
// *   *
// *   *
// *   *
// *****
// (0,0)  (0,1)  (0,2)  (0,3)  (0,4)
// (1,0)  (1,1)  (1,2)  (1,3)  (1,4)
// (2,0)  (2,1)  (2,2)  (2,3)  (2,4)
// (3,0)  (3,1)  (3,2)  (3,3)  (3,4)
// (4,0)  (4,1)  (4,2)  (4,3)  (4,4)
#include<iostream>
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
        if (i == 0 || i == 5 - 1)
           {cout << "*";}
        else if(j==0 || j==5-1)
         
           {cout << "*";}
         
         else
         
            cout<<" ";
         
      }
      cout << endl;;
    }
    
  }
  

//CS21M007-Himanshu Dolekar
//Parallel Computing Assignment 1.

/* In this first I filled both matrix with zeros.
 Then I take random row and column and assign it with 
 random values for both matrix.
 I could  not able to code how to distribute value with specific sparsity.
 
*/
#include<iostream>
#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
int m,n,p;
int spA,spB;
srand(time(0));

 cout<<"Enter number of row of matrix A"<<endl;
 cin>>m;
 cout<<"Enter number of column of matrix A"<<endl;
 cin>>n;
 cout<<"Enter number of column of matrix B"<<endl;
 cin>>p;
  cout<<"Enter sparcity of matrix A"<<endl;
 cin>>spA;
  cout<<"Enter sparcity of matrix B"<<endl;
 cin>>spB;




   int A[m][n], i ,j, k;
 std::fill(A[0], A[0] + m * n, 0);
    int B[n][p];
 std::fill(B[0], B[0] + n * p, 0);
   int AB[m][p];



 for( i = 0; i < m; ++i)
  {for( j = 0;  j < n; ++j)
     {
         A[rand()%m][rand()%n] = (rand()%100 + 1);}
     }
 cout<<"matrix A:"<<endl;
 for(i=0;i<m;i++)    
      {    
        for(j=0;j<p;j++)    
          {    
            cout<<A[i][j]<<" ";    
          }    
          cout<<"\n";    
      }    
 
  for( i = 0; i < n; ++i)
  {for( j = 0;  j < p; ++j)
     {B[rand()%n][rand()%p]= (rand()%100 + 1);}
  }
 
  cout<<"matrix B:"<<endl;

  for(i=0;i<m;i++)    
      {    
        for(j=0;j<p;j++)    
          {    
            cout<<B[i][j]<<" ";    
          }    
          cout<<"\n";    
      }


 cout<<"matrix AB:"<<endl;

  for(i=0;i<m;i++)    
   {    
      for(j=0;j<p;j++)    
         {    
            AB[i][j]=0;    
               for(k=0;k<n;k++)    
                  {    
                     AB[i][j]+=A[i][k]*B[k][j];    
                  }    
         }    
   }    


for(i=0;i<m;i++)    
{    
for(j=0;j<p;j++)    
{    
cout<<AB[i][j]<<" ";    
}    
cout<<"\n";    
}    


 
 return 0;
}

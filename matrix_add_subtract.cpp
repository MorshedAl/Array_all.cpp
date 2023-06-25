#include<iostream>
using namespace std;

int main()
{
// যোগ বিয়োগ করার সময় n×n order ঠিক রাখতে হবে অব্যশই।
// declare & initialize
    int A[2][3]= {1,1,1,1,1,1};
    int B[2][3]= {5,5,5,5,5,5};


    int C[2][3];

// matrix addition:
    for(int i=0; i<2; i++)
    {

        for(int j=0; j<=2; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";
 
       
// matrix substraction:    
    
    for(int i=0; i<2; i++)
    {

        for(int j=0; j<=2; j++)
        {
            C[i][j]=A[i][j]-B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
    
  
    return 0;
}
#include<iostream>
using namespace std;

int main()
{

// maximum 
    int A[]= {9,8,7,55,0,-9,5};

    int max=A[0];
    for(int i=0; i<7; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }

    cout<<"maximum="<<max<<endl;


// minimum 
    int min=A[0];

    for(int i=0; i<7; i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }


    }
    cout<<"minimum="<<min<<endl;
    return 0;
}
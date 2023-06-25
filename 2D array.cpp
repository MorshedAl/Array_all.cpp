#include<iostream>
using namespace std;

int main()
{
// declare
// initialize/input
// output
// for loop & for each loop

// declare & initialize
    int A[2][3]= {{9,8,7},{5,4,3}};
// or   int A[2][3]= {9,8,7,5,4,3};


    // output
    cout<<"output of A[2][3]:\n";
    for(int i=0; i<2; i++)
    {

        for(int j=0; j<=2; j++)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"\n";


// Runtime input

    cout<<"input of B[2][3]:\n";
    int B[2][3];
    for(int i=0; i<2; i++)
    {

        for(int j=0; j<=2; j++)
        {
            cin>>B[i][j];

        }
        cout<<endl;
    }


// output
    cout<<"Output of B[2][3]:\n";
    for(int i=0; i<2; i++)
    {

        for(int j=0; j<=2; j++)
        {
            cout<<B[i][j]<<"  ";

        }
        cout<<endl;
    }



    // for each loop
    cout<<"for each input D[3][3]:\n";

    // runtime inout
    int D[3][3];
    for(auto &x:D) // x represents row of 2D array,so use auto reference.
    {
        for(auto &y:x) // not &y:D
        {
            cin>>y;
        }
    }


// outout
    cout<<"\noutput of D[3][3]:\n";
    for(auto &x:D)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }






    return 0;
}

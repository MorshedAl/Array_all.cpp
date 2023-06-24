#include<iostream>
using namespace std;

int main()
{
    // declare & initialize
    int A[5]= {3,4,6,2,9};

    // for loop
    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;

    // for each loop
    for(auto x:A)
    {
        cout<<x<<" "; //only x, not A[x]
    }
    cout<<endl;

    // less elements
    int B[5]= {2,3,7};
    for(auto x:B)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // 0 initialize
    int C[5]= {0};
    for(auto x:C)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // 'empty' initialize
    int D[5]= {};
    for(auto x:D)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // float type
    float E[]= {2.5,7.7,3,6.9};
    for(auto x:E)
        cout<<x<<" ";

    cout<<endl;

    // float to int
    float EE[]= {2.5,7.7,3,6.9};
    for(int x:EE)
        cout<<x<<" ";

    cout<<endl;



    // char type
    char F[]= {'A','B','C','D'};
    for(auto x:F)
        cout<<x<<" ";
    cout<<endl;

    //initialize mixed type
    char G[]= {'A',66,'C',68,'G'};
    for(auto x:G)
        cout<<x<<" ";

    cout<<endl;

    // type char to int
    char H[]= {'A',66,'C',68,'G'};
    for(int x:H)
        cout<<x<<" ";

    cout<<endl;

   // type int to char
    int K[]= {65,66,67,68};
    for(char x:K)
        cout<<x<<" ";

    cout<<endl;





    return 0;
}
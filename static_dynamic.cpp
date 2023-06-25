#include<iostream>
using namespace std;

int main()

    // static array (m_allocation at stack)

    int A[5]= {9,8,7,6,5};

    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;


    // dynamic array ( m_allocation at heap)
    cout<<"enter 5  elements:\n";

    int* ptr=new int[5];

    for(int i=0; i<5; i++)
    {
        cin>>ptr[i];

    }
    
   // output   
    cout<<"output of dynamic array:\n";
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";

    }
    return 0;
}
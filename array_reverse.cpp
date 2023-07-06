
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// reverse_by_copy
// reverse_by_swap
// left shifting + rotate
// right_shifting +rotate
// display()


void reverse_by_copy(int A[],int n)
{   int i,j;
    int *B=new int[n];

    for(i=n-1,j=0; i>=0; i--,j++)
    {
        B[j]=A[i];

    }
    for( i=0, j=0; i<n; i++,j++)
    {
        A[i]=B[j];

    }
    cout<<endl;
}

void reverse_by_swap(int A[],int n)
{   int i,j;
    for(i=0,j=n-1; i<j; i++,j--)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;

    }
    cout<<endl;
}

void l_shifting_and_rotate)
{



}


void r_shifting_and_rotate()
{


}




void display(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

};
int main()
{   int A[]= {5,10,15,20,25,30};
    display(A,6);

    reverse_by_copy(A,6);
    display(A,6);

    reverse_by_swap(A,6);
    display(A,6);
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// merge two array


void merge(int A[],int na,int B[],int nb)
{
    int*C=new int[10];
    int i,j,k;
    i=j=k=0;

    while(i<na && j<nb)
    {

        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }

    for( ; i<na; i++)
        C[k++]=A[i];
    for( ; j<nb; j++)
        C[k++]=B[j];


    for( i=0; i<10; i++)
    {
        cout<<C[i]<<" ";

    }
    cout<<endl;
}



int main()
{   int A[]= {5,10,15,20,25};
    int B[]= {30,35,40,45,50};


    merge(A,5,B,5);



    return 0;
}
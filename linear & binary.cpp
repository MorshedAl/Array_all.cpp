#include<iostream>
using namespace std;



int linear_search(int A[],int key,int n)
{
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
        {
            return i;
            break;

        }
    }

    return -1;
}


int binary_search(int A[],int key)
{
    int l=0,h=8;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(key==A[mid])
        {
            return mid;
            break;

        }
        else if(key<A[mid])
            h=mid-1;
        else
            l=mid+1;



    }

    return -1;



}


int main()
{
    int A[]= {3,5,7,8,9,15,20,30,55};

    cout<< linear_search(A,15,9)<<endl;
   
    cout<< binary_search(A,20)<<endl;
    cout<< binary_search(A,100)<<endl;


    return 0;
}
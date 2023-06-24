#include<iostream>
using namespace std;


int binary_search(int A[],int key)
{
    int l=0,h=7;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(key==A[mid]) //case-1
        {
            cout<<"found at index "<<mid<<endl;
            break; // stop loop

        }
        else if(key<A[mid]) //case-2
        {
            h=mid-1;
        }
        else        //case-3
            l=mid+1;
    }
   
    // যখন l>h হবে,মানে not found
    return -1;
}



int main()
{ // array must be sorted
    int A[]= {3,5,6,9,15,30,40};
  
    binary_search(A,15);
    cout<<endl;

    cout<< binary_search(A,13);

    return 0;
}
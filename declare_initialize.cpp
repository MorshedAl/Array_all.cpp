#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
//initialize at compile time
    int arr[]={5,10,15,20,25 };

 // another way
 arr[0]=5;  
  arr[1]=10;    
   arr[2]=15;   
    arr[3]=20;  
    arr[4]=25;   

 //not allowed 
 * int arr[5]={ };  
 *int arr[n];
 *int arr[];
 *int arr[-5];


  //allowed 
  # int arr[2+3];
  # int arr[7*5];
  # int arr[10/2];
  # int arr[11/2];
  #int arr[5]={0};
    
 address= base address +index*4
   here, 4 means 4 bits int data_type  
    */

// array declare

int arr[5];

    // array input
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }


    // array output
   for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
   //single element access 
    cout<<arr[2];
    
    cout<<endl;

    // reverse array
    for(int i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;





    return 0;
}

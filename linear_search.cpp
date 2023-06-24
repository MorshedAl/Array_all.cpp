#include<iostream>
using namespace std;

int main()
{
// linear aearch

    int A[]= {5,10,50,15,20};

    int key=50;

    for(int i=0; i<5; i++)
    {
        if(key==A[i])
        {
            cout<<"key found at "<<i<<endl;
             
           return 0;// program finished 
        }

    }
  
  cout<<"not found!\n";

/*
 break: stop loop/switch case 
 return: stop function 
 exit(0): stop program

*/





        return 0;
}
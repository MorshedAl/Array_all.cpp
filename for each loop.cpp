#include<iostream>
using namespace std;

int main()
{
    int A[]= {2,3,4,5};

    // for loop
    for(int i=0; i<4; i++)
    {
        cout<<A[i]<<" ";// index increment  
    }
    cout<<endl;
    
    
/*
    // for each loop
    
   . data type আর size নিয়ে ঝামেলা নেই।
   . value উপর কাজ করে, pointer উপর না।
    
 */
    
    for(auto x:A)
    {
        cout<<x<<" ";// value update 
    }
    cout<<endl;

  
    
    
    // ++x (আগে update, then print)
    for(auto x:A)
    {
        cout<<++x<<" ";//3 4 5 6
    }
    cout<<endl;


    // x++ (আগে print, then value update)
    for(auto x:A)
    {
        cout<<x++<<" "; // 2 3 4 5
    }
    cout<<endl;


// x++ ( modified value স্থায়ী থাকে না।)
    for(auto x:A)
    {
        cout<<x++<<" ";// 2 3 4 5

    }
    cout<<endl;
    
// & ব্যবহার করলে modified value স্থায়ী থাকে। 
    for(auto &x:A)
    {
        cout<<x++<<" ";// 2 3 4 5

    }
    cout<<endl;


    for(auto x:A)
    {
        cout<<x++<<" ";// 3 4 5 6

    }


    return 0;
}
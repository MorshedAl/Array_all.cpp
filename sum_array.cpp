#include<iostream>
using namespace std;

int main()
{

    int A[]= {9,8,7,6,5};
    int sum=0;

    for(int i=0; i<5; i++)
    {
        sum=sum+A[i];
    }

    cout<<"sum="<<sum<<endl;


    // for each loop
    int summm=0;
    for(auto x:A)
    {
        summm=summm+x;
    }
    cout<<"summm="<<summm<<endl;

    return 0;
}
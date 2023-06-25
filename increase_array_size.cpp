#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

// increase array size

    /*
    বর্তমানে পাপ্পু মাস্টার ৫ সাইজের রুম আছে,নতুন বড় সাইজের রুম লাগবে।
    এজন্য
    1.quader জমিদার থেকে বড় রুম নিয়ে,আগের স্টুডেন্ট নতুন রুমে স্থানান্তর।
    2.আগের রুমটি সেল/ডেসট্রয় করে দিবে
    4.quader জমিদার থেকে দায়িত্ব বুঝে নিয়ে,বদনা ধরায় দিবে।

    */

    int *ptr=new int[5];

    // input
    cout<<"input 5 elements:\n";
    for(int i=0; i<5; i++)
    {
        cin>>ptr[i];
    }


    int *q=new int[20];

    q=ptr;

    delete []ptr;

    ptr=q;
    q=NULL;

    // output:
    for(int i=0; i<20; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl<<endl;

    // add new elements
    ptr[5]=33;
    ptr[7]=55;
    ptr[19]=99;

    cout<<"after adding new elements:\n";

    for(int i=0; i<20; i++)
    {
        cout<<ptr[i]<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=10;
    // int* aptr;
    // aptr=&a;
    // cout<<a<<" "<<aptr<<" "<<*aptr<<" "<<&a<<" "<<&aptr<<" ";
    // // incrementation of address
    // aptr++;
    // cout<<aptr;
    int arr[]={10,20,30};
    // cout<<*arr;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
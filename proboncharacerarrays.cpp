#include<bits/stdc++.h>
using namespace std;



int main()
{
    // char arr[100]="sai pavan";
    // cout<<arr;
    // char arr1[100];
    // cin>>arr1;
    // int i=0;
    // while(arr1[i]!='\0'){
    //     cout<<arr1[i];
    //     i++;
    // }
// maxlengthofwordinsentence
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int cursum=0, maxsum=0,i=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(cursum>maxsum){
                maxsum=cursum;
            }
            cursum=0;
        }
        else
        cursum++;
        if(arr[i]=='\0')
            break;
        
        i++;
        
    }
    cout<<maxsum;
} 
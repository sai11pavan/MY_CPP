#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int n, int k){
    int s=0, e=n-1; // Adjusted end index
    while (s <= e)
    {
        int mid = (s + e) / 2; // Correct calculation of mid-point
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    
    return -1;
}

int mostfreq(int arr[], int n)
{
    int max_count=0;
    int most_max_count;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
            if(max_count<count)
            {
                max_count=count;
                most_max_count=arr[i];
            }
        
    }
    return most_max_count;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    // int k;
    // cin>>k;
    // cout<<binsearch(ar,n,k);
    cout<<mostfreq(ar,n);
    return 0;
}
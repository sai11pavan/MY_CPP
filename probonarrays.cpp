#include<bits/stdc++.h>
using namespace std;
const int big=1e6+2;
void maxuptoapoint(int arr[], int n)
{
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>res){
            res=arr[i];
            cout<<res<<" ";
        }else{
            cout<<res<<" ";
        }
    }
    
}

void largestaritthmeticsubarray(int n,int vec[]){
    int ps,cs=0,res=0;
    for(int i=1;i<n-1;i++){
        ps=vec[i]-vec[i-1];
        if(ps==vec[i+1]-vec[i]){
            cs++;
        }
        else{
            cs=0;
        }
        res=max(cs,res);
    }
    cout<<res+2;
}

void sumsubarray(int ar[], int n){
    int mainsum=0;
    
    for(int i=0;i<n;i++){
        int res=0;
        for(int j=i;j<n;j++){
            res+=ar[j];
            mainsum+=res;
        }

    }
    cout<<mainsum<<" ";
    
}

void recordbreaker(int n, int arr[]){
    int prevmax=arr[0],count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>prevmax&&arr[i]>arr[i+1]){
            count++;
            prevmax=max(arr[i],prevmax);
        }
    }
    cout<<count;
}



void firstmin(int n, int arr[]){
    int arr1[big];
    fill(arr1, arr1 + big, -1);
    int cnt=0,mini=INT_MAX,res=INT_MAX;
    for(int i=0;i<n;i++){
        if( arr1[arr[i]]==-1){
        arr1[arr[i]]=cnt;
        cnt++;
        }else{
            mini=arr1[arr[i]];
            res=min(res, mini);
        }   
    }
    cout<<res;
}

void sumsubarraywithgivensum(int n,int s, int arr[]){
    int st=0, ed=n-1,sum=0;
    
}

void smallestpositivemissingnumber(int n, int arr[]){
    bool arr1[big];
    for(int i=0;i<big;i++){
        arr1[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            arr1[arr[i]]=true;
        }
    }
    for(int i=0;i<big;i++){
        if(arr1[i]==false){
            cout<<i;
            break;
        }
    }
}

void printsubarray(int n, int arr[]){
// subarray means the continuos partt of an array
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }  
    }
}

void maxsubarraysum(int n, int arr[]){
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                res=max(res,sum);
            }
        }  
    }
    cout<<res;
}

void maxsubarraysumoptimal(int n, int arr[]){
    int cs=0, res=INT_MIN;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs<0){
            cs=0;
        }
        res=max(res,cs);
    }
    cout<<res;
}

int maxsubarraysumoptimalforbelowexample(int n, int arr[]){
    int cs=0, res=INT_MIN;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs<0){
            cs=0;
        }
        res=max(res,cs);
    }
    return res;
}

void maxsubarraysumcircular(int n, int arr[]){
    int notuseful=maxsubarraysumoptimalforbelowexample(n,arr);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int useful=sum+maxsubarraysumoptimalforbelowexample(n,arr);
    cout<<useful<<notuseful;
}

void pairsumbruteforce(int n,int k, int arr[]){
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n-1;j++){
        if(arr[i]+arr[j]==k){
            cout<<i<<" "<<j;
            cout<<true;
        }
       }
    }
}

void pairsumoptimal(int n, int k, int arr[]){
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]+arr[j]<k){
            i++;
        }
        else if(arr[i]+arr[j]>k){
            j--;
        }
        else{
            cout<<i<<" "<<j;
            i++;
            j--;
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }  
   
    // maxuptoapoint(arr,n);
    // sumsubarray(arr,n);
    // largestaritthmeticsubarray(n,arr);
    // recordbreaker(n,arr);
    // firstmin(n,arr);
    // sumsubarraywithgivensum(n,s,arr);
    // smallestpositivemissingnumber(n,arr);
    // printsubarray(n,arr);
    // maxsubarraysum(n,arr);
    // maxsubarraysumoptimal(n,arr);
    // maxsubarraysumcircular(n,arr);
    // pairsumbruteforce(n,k,arr);
    pairsumoptimal(n,k,arr);
}
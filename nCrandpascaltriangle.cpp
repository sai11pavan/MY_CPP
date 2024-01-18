#include<iostream>
using namespace std;

int fac(int n){
    int j=1;
    for(int i=2;i<=n;i++)
    {
        j*=i;
    }
    return j;
}

int ncr(int n, int r){
    return (fac(n)/(fac(n-r)*fac(r)));
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
            cout<<ncr(i,j)<<" ";
            }
        }
        cout<<"\n";
    }
}
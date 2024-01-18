#include<iostream>
using namespace std;

void fac(int n){
    int i=1;
    for(int j=1;j<=n;j++){
        i*=j;
    }
    cout<<i;
}

int main()
{
    int n;
    cin>>n;
    fac(n);
}
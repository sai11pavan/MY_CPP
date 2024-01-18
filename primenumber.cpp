#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}

int main()
{
    // int a,b;
    // cin>>a>>b;
    // for(int i=a;i<=b;i++){
    //     int j;
    //     for(j=2;j<i;j++){
    //         if(i%j==0){
    //             break;
    //         }
            
    //     }
    //     if(j==i){
    //         cout<<i<<"\n";
    //     }
        
    // }
    int n;
    cin>>n;
    cout<<isprime(n);

    return 0;
}
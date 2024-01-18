#include <iostream>
using namespace std;
bool ispower(int n){
    return (n&(n-1))==0 && (n&0xAAAAAAAA)==0;
}

int main()
{
    int n;
    cin>>n;
    if(ispower(n)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
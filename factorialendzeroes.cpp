#include <iostream>

using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int res=fact(n);
    int count=0;
    while(res>0){
        int digit=res%10;
        if(digit==0){
            count+=1;
        }
        
        else{
            break;
        }
        res/=10;
    }
    cout<<count;
    return 0;
}
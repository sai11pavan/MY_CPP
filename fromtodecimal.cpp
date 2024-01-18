#include<iostream>
using namespace std;

int octal(int n){
    int dig=n%10;
    int res=0;
    while (n>0)
    {
        int i=0;
        res+=8^(i)+dig;
        n/=10;
        i++;
    }
    return res;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<octal(n);
}
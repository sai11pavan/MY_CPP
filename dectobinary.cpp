#include<iostream>
using namespace std;
void dectobin1(int n){
    int array[32];
    int i=0;
    while (n>0)
    {
        array[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<array[j];
    }
}



int main()
{
    int n;
    cin>>n;
    dectobin1(n);
    return 0;
}

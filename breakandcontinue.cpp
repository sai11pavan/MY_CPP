#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            continue;
        }
        count+=1;
    }
   cout<<count;
}

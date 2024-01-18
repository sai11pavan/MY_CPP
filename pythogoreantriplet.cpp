#include<iostream>
#include<math.h>

using namespace std;

bool pythag(int a, int b, int c){
    int x=max(a,max(b,c));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;        
    }
    else{
        x=b;
        y=c;
    }
    if(y*y+z*z==x*x){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(pythag(a,b,c)){
        cout<<true;
    }
    else{
        cout<<false;
    }
}
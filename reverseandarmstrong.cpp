#include<iostream>
#include<cmath>
using namespace std;
                  
// int rev(int n){
//     int rev=0;
//     while (n>0)
//     {
//         int dig=n%10;rev=rev*10+dig;n/=10;
//     }
//     return rev;
// }     
                          
bool armstrong(int n)
{
    int org = n;
    int res = 0;
    
    while (n > 0) {
        int dig = n % 10;
        res += pow(dig, 3);
        n /= 10;
    }

    if (res == org) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    
    cout << armstrong(n);

    return 0;
}
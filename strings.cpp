#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // string str1;
    // getline(cin, str1);
    // cout<<str1;
    string s1="sai11pavan";
    string s2="abcd";
    // cout<<s2.compare(s1);
    // s1.clear();
    // if(s1.empty()){
    //     cout<<"empty";
    // }
    // s1.erase(3,3);
    // cout<<s1;
    // s1="sai11pavan";
    // cout<<s1.find("11");
    // s2= s1.substr(3,3);
    // cout<<s2;
    s1="saipavanbolagani";
    sort(s1.begin(), s1.end());
    cout<<s1;
    
}
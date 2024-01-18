#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void uppandlow(string s1){
     int n=s1.length();
    for(int i=0;i<n;i++){
        s1[i]=toupper(s1[i]);
    }
    cout<<s1;
    for(int i=0;i<n;i++){
        s1[i]=tolower(s1[i]);
    }
    cout<<s1;
}

void uppandlowusingnums(string s1){
    int n = s1.size();
    for(int i=0;i<n;i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]-=32;
        }
        cout<<s1[i];
    }
    for(int i=0;i<n;i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+=32;
        }
        cout<<s1[i];
    }
}

void bignumber(string s1){
    sort(s1.begin(),s1.end());
    cout<<s1;
}

void maxfrequency(string s1){
    int n=s1.length();
   vector<int>freq(26,0);
   for(int i=0;i<n;i++){
    freq[s1[i]-'a']++;
   }
   int maxsum=0;
   char ans='a';
   for(int i=0;i<n;i++){
    if(freq[i]>maxsum){
        maxsum=freq[i];
        ans=i+'a';
    }
   }
   cout<<ans<<" "<<maxsum;
}

int main()
{
    string s1;
    // cin>>s1;
    // uppandlow(s1);
    // uppandlowusingnums(s1);
    // s1="5281";
    // bignumber(s1);
    cin>>s1;
    maxfrequency(s1);
    return 0;
}
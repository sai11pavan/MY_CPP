#include<iostream>
#include<vector>
using namespace std;

int occurence(int n, vector<int>vec){
    int res,count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            res=vec[i]+vec[j];
            for(int k=0;k<n;k++){
                if(vec[k]==res)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

}
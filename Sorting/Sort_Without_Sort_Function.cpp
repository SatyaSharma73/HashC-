#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<int> v;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }

    map<int,int> mp;

   
    for(auto x:v){
        mp[x]++;
    }
for(auto x:mp){
          vector<int>v(x.second,x.first);
           ans.insert(ans.end(),v.begin(),v.end());
    }


for(auto x:ans){
         cout<<x<<" ";
    }


}
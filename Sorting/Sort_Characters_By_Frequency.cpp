#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

int main(void){

string s="Aabb";
map<char,int> mp;

vector<pair<int,char>> vp;
string ans="";

for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
for(auto x:mp){
    vp.push_back({x.second,x.first});
}

sort(vp.rbegin(),vp.rend());

for(int i=0;i<vp.size();i++){
    auto t=vp[i].first;
    string s(t,vp[i].second);
    ans=ans+s;
}
    cout<<ans;
}



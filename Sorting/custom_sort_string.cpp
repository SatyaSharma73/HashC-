#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(void){
    string order="cba",str="abcdcccd",ans="";
    map<char,int> mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    for(auto x:order){
        if(mp.find(x)!=mp.end()){
            auto temp=mp.find(x);
            int count=temp->second;
            string s(count,x);
            ans=ans+s;
            mp.erase(x);
        }
    }
    for(auto x:mp){
        string s(x.second,x.first);
        ans=ans+s;
    }

    cout<<ans;



}
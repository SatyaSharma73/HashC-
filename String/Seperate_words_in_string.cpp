#include<iostream>
#include<algorithm>
#include<vector>
#include <sstream>

using namespace std;

int main(void){
    string s="hello world",str;
    vector<string> vs;
    istringstream ss(s);
    while(getline(ss,s,' ')){
        vs.push_back(s);
    }

    
for(auto x:vs){
    cout<<x<<" ";
}



}
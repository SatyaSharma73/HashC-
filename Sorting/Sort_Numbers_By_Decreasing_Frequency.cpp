#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){

    vector<int> nums={1,1,3,1,2,2,2,2,3};
    int n=6;
    int max=0;
    unordered_map<int,int> umap;
    
    for(auto x:nums){
        umap[x]++;
    }
    sort(nums.begin(),nums.end(),[&](int a,int b){
        return umap[a] !=nums[b] ? umap[a]>umap[b]:a<b;
    });
    
    for(auto x:nums){
        cout<<x<<" ";
    }
}
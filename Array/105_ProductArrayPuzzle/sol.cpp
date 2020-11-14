#include<bits/stdc++.h>
using namespace std;


vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    vector<long long int> res(n) ;
    
    res[0] = 1;
    for(int i=1;i<n;i++){
        res[i] = res[i-1]*nums[i-1];
    }
    
    long long int prod = nums[n-1];
    for(int i=nums.size()-2;i>=0;i--){
        res[i] = prod * res[i];
        prod = prod*nums[i];
    }
    
    return res;
}
#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n, int target){
    unordered_map<int,int> mp;
    int sum = 0, len = INT_MAX;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == target){
            len = min(len, i+1);
        }
        if(mp.find(sum-target) != mp.end()){
            len = min(len, i-mp[sum-target]);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    if(len == INT_MAX){
        return 0;
    }
    return len;

    
}

int main(){
    int n = 5, target = 11;
    int arr[n] = {1,5,4,6,-4};
    cout << solve(arr, n, target) << endl;
    return 0;
}
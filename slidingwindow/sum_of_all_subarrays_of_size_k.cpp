#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int* arr, int n , int k){
     vector<int> ans;
     int sum = 0;
     int i = 0, j = 0;
     while(j < n) {
        if(j-i+1 <= k) {
            sum += arr[j];
            if(j-i+1 == k) {
            ans.push_back(sum);
            } 
            j++;
        }
        else{
            sum -= arr[i];
            i++;
        }
     }
     return ans;
}

int main(){
    int n = 6, k = 2;
    int arr[n] = {1, -2, 3, -4, 5, 6};
    vector<int> ans;
    ans = solve(arr, n, k);
    for(int i = 0; i <ans.size(); i++){
        cout << ans[i] << " " ;
    }
    return 0;
}
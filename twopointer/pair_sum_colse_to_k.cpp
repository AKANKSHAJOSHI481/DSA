#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int*arr, int n, int k){
    vector<int> ans(2);
     int diff = INT_MAX;
     int i = 0;
     int j = n-1;
     while(i<j){
        int sum = abs(arr[i] + arr[j] - k);
        if(sum < diff) {
            diff = sum;
            ans[0] = arr[i];
            ans[1] = arr[j];
            }
        if(arr[i] + arr[j] > k){
            j--;
        }
        else{
            i++;
        }
     }

     
     return ans;
}

int main(){
    int n = 6, k = 54;
    int arr[n] = {10, 22, 28, 29, 30, 40};
    // cout << solve(arr,n, k) << endl;
    vector<int> answer;
    answer = solve(arr,n,k);
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int* arr1, int* arr2, int n , int m,  int x){
    int mini = INT_MAX;
    int i = 0;
    int j = m-1;
    vector<int> ans(2);
    // for(int k = 0; k<n; k++){
    //     cout << arr1[k] << " ";
    // }
    // cout << endl;
    // for(int k = 0; k<m; k++){
    //     cout << arr2[k] << " ";
    // }
    cout << endl;
    // cout << "arr1[11]  " << arr1[11] << endl;
    while(i <= n-1 && j >= 0){
        int sum = abs(arr1[i] + arr2[j] - x);
        // mini = min(mini, sum);
        if(mini >= sum){
            ans[0] = arr1[i];
            ans[1] = arr2[j];
            mini = sum;
        }
        // cout << "minin  " << mini << "  i " << i << "  j  "<<j<< endl;
        if(x < arr1[i]+arr2[j]){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}

int main(){
    int n = 4, m = 4;
    int arr1[4] = {1, 4, 5, 7};
    int arr2[4] = {10, 20, 30, 40};
    int x = 32;
    vector<int> ans;
    ans = solve(arr1, arr2,n, m, x);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
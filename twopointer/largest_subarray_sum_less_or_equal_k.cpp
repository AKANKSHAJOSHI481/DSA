#include<bits/stdc++.h>
using namespace std;
int solve(int*arr, int n, int k){
     int res = 0;
     int j = 0;
     int sum = 0;
     for(int i=0; i<n; i++){
        while(sum <= k && j<=n-1){
            sum += arr[j];
            j++;
            res = max(res, j-i);
            cout << i << " " << j << " " << res << " " << sum << endl;
        }
        sum = sum - arr[i];

     }
     return res;
}

int main(){
    int n = 8, k = 10;
    int arr[n] = {8,2,6,-8,1,1,4,2};
    cout << solve(arr,n, k) << endl;
    return 0;
}
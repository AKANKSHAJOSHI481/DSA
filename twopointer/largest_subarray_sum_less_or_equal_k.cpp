#include<bits/stdc++.h>
using namespace std;
int solve(int*arr, int n, int k){
     int res = n;
     int j = 0;
     int sum = 0;
     for(int i=0; i<n; i++){
         sum += arr[j];
            j++;
        while(sum >= k && j<=n-1){
           
            res = min(res, j-i+1);
            cout << i << " " << j << " " << res << " " << sum << endl;
            sum = sum - arr[i];
        }
        

     }
     return res;
}

int main(){
    int n = 8, k = 4;
    int arr[n] = {1,4,4};
    cout << solve(arr,n, k) << endl;
    return 0;
}
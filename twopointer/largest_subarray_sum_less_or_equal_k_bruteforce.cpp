#include<bits/stdc++.h>
using namespace std;
int solve(int*arr, int n, int k){
     int res = 0;
     for(int i=0; i<n; i++){
        int sum = 0;
        int count = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            count++;
            if(sum > k){
                break;
            }
        }
        res = max(res, count);

     }
     return res;
}

int main(){
    int n = 8, k = 10;
    int arr[n] = {8, 2, 6, -8, 1, 1, 4, 2};
    cout << solve(arr,n, k) << endl;
    return 0;
}
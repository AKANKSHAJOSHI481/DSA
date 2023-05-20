#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n , int k){
     int ans = 0;
     int sum = 0;
     int i = 0, j = 0;
     while(j < n) {
        if(j-i+1 <= k) {
            sum += arr[j];
            if(j-i+1 == k) {
            ans = max(ans,sum);
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
    int n = 9, k = 4;
    int arr[n] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int ans = solve(arr, n, k);
    cout << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int solve(int*arr, int n, int k){
    //  int res = 0;
     int j = 0;
     int sum = arr[0];
     int count = 0;
     int i=0;
     while(i<n && j<n){
        if(sum <= k){
            j++;

            if(j >= i){
                count += j-i;
            }
            if(j < n){
                sum += arr[j];
            }
        }
        else{
            sum = sum - arr[i];
            i++;
        }
     }
     return count;
}

int main(){
    int n = 8, k = 10;
    int arr[n] = {8,2,6,2,1,1,4,2};
    cout << solve(arr,n, k) << endl;
    return 0;
}